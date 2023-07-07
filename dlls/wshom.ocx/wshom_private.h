/*
 * Copyright 2011 Jacek Caban for CodeWeavers
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#include <stdarg.h>

#define COBJMACROS

#include "windef.h"
#include "winbase.h"
#include "ole2.h"

/* typelibs */
typedef enum tid_t {
    NULL_tid,
    IWshCollection_tid,
    IWshEnvironment_tid,
    IWshExec_tid,
    IWshShell3_tid,
    IWshShortcut_tid,
    LAST_tid
} tid_t;

HRESULT get_typeinfo(tid_t tid, ITypeInfo **typeinfo) DECLSPEC_HIDDEN;

HRESULT WINAPI WshShellFactory_CreateInstance(IClassFactory*,IUnknown*,REFIID,void**) DECLSPEC_HIDDEN;
