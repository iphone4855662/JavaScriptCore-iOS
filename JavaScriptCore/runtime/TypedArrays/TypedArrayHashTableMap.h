/*
 *  Copyright (C) 1999-2001 Harri Porten (porten@kde.org)
 *  Copyright (C) 2003, 2004, 2005, 2006, 2008, 2009 Apple Inc. All rights reserved.
 *  Copyright (C) 2007 Samuel Weinig <sam@webkit.org>
 *  Copyright (C) 2009 Google, Inc. All rights reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef TypedArrayHashTableMap_h
#define TypedArrayHashTableMap_h

#include <wtf/HashMap.h>


namespace JSC {
class JSGlobalData;
struct HashTable;
}

namespace WebCore {

// Map from static HashTable instances to per-GlobalData ones.
class TypedArrayHashTableMap {
public:
    ~TypedArrayHashTableMap();
    const JSC::HashTable* get(const JSC::HashTable* staticTable);
private:
    HashMap<const JSC::HashTable*, JSC::HashTable> m_map;
};

} // namespace JSC

#endif // TypedArrayHashTableMap_h
