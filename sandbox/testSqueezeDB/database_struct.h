/*
 Copyright 2010 Michael Rahr

This file is part of SqueezeRemote.

SqueezeRemote is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License.

    SqueezeRemote is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with SqueezeRemote.  If not, see <http://www.gnu.org/licenses/>.
*/




#ifndef DATABASE_STRUCT_H
#define DATABASE_STRUCT_H
#include <QList>

 typedef struct{
    QString                     id;
    QString              albumName;
    QString              albumRealName;
    QString              albumArtPath;
    QString              albumArtist;

} allAlbum;

typedef struct{
    QString             albumId;
    QString             trackNo;
    QString             trackName;
    QString             trackTime;
} allTrackInfo;

 typedef struct{
     QString            favid;
     QString            favName;
     QString            favType;
 } allFavoritesStruct;

typedef QList<allAlbum *> allAlbumList;
typedef QList<allTrackInfo *> allTrackInfoList;

#endif // DATABASE_STRUCT_H
