#pragma once

#include "types.h"
#include "Minecraft.Core/Vec3i.h"
#include <memory>

class Direction;
class Entity;
class Vec3;

class BlockPos : public Vec3i {
public:
    static BlockPos zero;

    BlockPos(int x, int y, int z);
    BlockPos();
    BlockPos(std::shared_ptr<Entity> const&);
    BlockPos(Vec3*);
    BlockPos(Vec3i const&);

    bool equals(BlockPos const& pos) const;
    bool equals(BlockPos const* pos) const;

    BlockPos offset(int x, int y, int z) const;

    BlockPos relative(Direction const*) const;
    BlockPos relative(Direction const*, int) const;

    BlockPos above() const;
    BlockPos above(int) const;
    BlockPos below() const;
    BlockPos below(int) const;
    BlockPos north() const;
    BlockPos north(int) const;
    BlockPos south() const;
    BlockPos south(int) const;
    BlockPos west() const;
    BlockPos west(int) const;
    BlockPos east() const;
    BlockPos east(int) const;

    long long compressBlockPos() const;
    void decompressBlockPos(long long);
};

ASSERT_SIZEOF(BlockPos, 0xC)
