/*  This file is part of Lasagna
>	Copyright (C) 2018 Bernardo Giordano
>
>   This program is free software: you can redistribute it and/or modify
>   it under the terms of the GNU General Public License as published by
>   the Free Software Foundation, either version 3 of the License, or
>   (at your option) any later version.
>
>   This program is distributed in the hope that it will be useful,
>   but WITHOUT ANY WARRANTY; without even the implied warranty of
>   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
>   GNU General Public License for more details.
>
>   You should have received a copy of the GNU General Public License
>   along with this program.  If not, see <http://www.gnu.org/licenses/>.
>   See LICENSE for information.
*/

#ifndef IO_H
#define IO_H

#include "common.h"

bool fileExist(FS_Archive archive, std::u16string path);
Result createDirectory(FS_Archive archive, std::u16string path);
bool directoryExist(FS_Archive archive, std::u16string path);
void copyFile(FS_Archive srcArch, FS_Archive dstArch, std::u16string srcPath, std::u16string dstPath);
Result copyDirectory(FS_Archive srcArch, FS_Archive dstArch, std::u16string srcPath, std::u16string dstPath);
void copyPatchFolder(size_t index);
void deletePatchFolder(size_t index);

#endif