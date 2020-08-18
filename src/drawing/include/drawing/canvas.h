#ifndef CANVAS_H
#define CANVAS_H

#include <vector>
#include <memory>

#include "data_structures/color.h"
#include "drawable.h"

namespace raytracer
{
    class canvas : public drawable
    {
        const int _width;
        const int _height;
        std::vector<std::shared_ptr<raytracer::color>> _pixels;

        int int_for_coords(int x, int y);
    public:
        canvas(int width, int height);

        int width() const override;
        int height() const override;
        std::vector<std::shared_ptr<raytracer::color>> pixels() const override;

        void write_pixel(int x, int y, raytracer::color c);
        raytracer::color* pixel_at(int x, int y);
    };
}

#endif