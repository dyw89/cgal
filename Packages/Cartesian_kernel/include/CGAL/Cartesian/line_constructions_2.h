// ======================================================================
//
// Copyright (c) 2000 The CGAL Consortium
//
// This software and related documentation is part of an INTERNAL release
// of the Computational Geometry Algorithms Library (CGAL). It is not
// intended for general use.
//
// ----------------------------------------------------------------------
//
// release       :
// release_date  :
//
// file          : include/CGAL/Cartesian/line_constructions_2.h
// revision      : $Revision$
// revision_date : $Date$
// author(s)     : Herve Bronnimann
// coordinator   : INRIA Sophia-Antipolis (Mariette.Yvinec@sophia.inria.fr)
//
// ======================================================================

#ifndef CGAL_CARTESIAN_LINE_CONSTRUCTIONS_2_H
#define CGAL_CARTESIAN_LINE_CONSTRUCTIONS_2_H

#include <CGAL/Cartesian/Point_2.h>
#include <CGAL/Cartesian/Line_2.h>

CGAL_BEGIN_NAMESPACE

template < class R >
inline
LineC2<R CGAL_CTAG>
line_from_points( PointC2<R CGAL_CTAG> const& p,
                  PointC2<R CGAL_CTAG> const& q)
{
  typename R::FT a,b,c;
  line_from_pointsC2(p.x(),p.y(),q.x(),q.y(),a,b,c);
  return LineC2<R CGAL_CTAG>(a,b,c);
}

template < class R >
inline
LineC2<R CGAL_CTAG>
line_from_point_direction( PointC2<R CGAL_CTAG> const& p,
                           DirectionC2<R CGAL_CTAG> const& d)
{
  typename R::FT a,b,c;
  line_from_point_directionC2(p.x(),p.y(),d.dx(),d.dy(),a,b,c);
  return LineC2<R CGAL_CTAG>(a,b,c);
}

template < class R >
inline
LineC2<R CGAL_CTAG>
bisector( PointC2<R CGAL_CTAG> const& p,
          PointC2<R CGAL_CTAG> const& q)
{
  typename R::FT a,b,c;
  bisector_of_pointsC2(p.x(),p.y(),q.x(),q.y(),a,b,c);
  return LineC2<R CGAL_CTAG>(a,b,c);
}

template < class R >
inline
LineC2<R CGAL_CTAG>
perpendicular_through_point( LineC2<R CGAL_CTAG> const& l,
                             PointC2<R CGAL_CTAG> const& p)
{
  typename R::FT a,b,c;
  perpendicular_through_pointC2(l.a(),l.b(),p.x(),p.y(),a,b,c);
  return LineC2<R CGAL_CTAG>(a,b,c);
}

CGAL_END_NAMESPACE

#endif // CGAL_CARTESIAN_LINE_CONSTRUCTIONS_2_H
