// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "webcore_convert.h"

namespace WebKit {

WebCore::FloatPoint convert(const WebFloatPoint& point)
{
    return WebCore::FloatPoint(point.x, point.y);
}

WebCore::IntPoint convert(const WebPoint& point)
{
    return WebCore::IntPoint(point.x, point.y);
}

WebCore::IntSize convert(const WebSize& size)
{
    return WebCore::IntSize(size.width, size.height);
}

WebSize convert(const WebCore::IntSize& size)
{
    return WebSize(size.width(), size.height());
}

WebFloatPoint convert(const WebCore::FloatPoint& point)
{
    return WebFloatPoint(point.x(), point.y());
}

}


