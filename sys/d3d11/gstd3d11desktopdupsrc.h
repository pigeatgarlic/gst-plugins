/*
 * GStreamer
 * Copyright (C) 2020 Seungha Yang <seungha@centricular.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef __GST_D3D11_DESKTOP_DUP_SRC_H__
#define __GST_D3D11_DESKTOP_DUP_SRC_H__

#include <gst/gst.h>
#include <gst/video/video.h>
#include <gst/base/gstpushsrc.h>
#include <gst/d3d11/gstd3d11.h>

G_BEGIN_DECLS

#define GST_TYPE_D3D11_DESKTOP_DUP_SRC (gst_d3d11_desktop_dup_src_get_type())
G_DECLARE_FINAL_TYPE (GstD3D11DesktopDupSrc, gst_d3d11_desktop_dup_src,
    GST, D3D11_DESKTOP_DUP_SRC, GstPushSrc);

G_END_DECLS

#endif /* __GST_D3D11_DESKTOP_DUP_H__ */