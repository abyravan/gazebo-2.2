/*
 * Copyright (C) 2012-2014 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/

#include <boost/shared_ptr.hpp>

/// \file
/// \brief ODE wrapper forward declarations and typedefs
namespace gazebo
{
  namespace physics
  {
    class ODECollision;
    class ODELink;
    class ODEModel; // From: https://bitbucket.org/osrf/gazebo/issues/1780/ode-collision-space-not-deleted-when-model
    class ODERayShape;
    class ODESurfaceParams;
    class ODEPhysics;

    /// \def ODECollisionPtr
    /// \brief Boost shared point to ODECollision
    typedef boost::shared_ptr<ODECollision> ODECollisionPtr;

    /// \def ODELinkPtr
    /// \brief Boost shared point to ODELink
    typedef boost::shared_ptr<ODELink> ODELinkPtr;

    // From: https://bitbucket.org/osrf/gazebo/issues/1780/ode-collision-space-not-deleted-when-model
    /// \def ODEModelPtr
    /// \brief Boost shared point to ODEModel
    typedef boost::shared_ptr<ODEModel> ODEModelPtr;

    /// \def ODERayShapePtr
    /// \brief Boost shared point to ODERayShape
    typedef boost::shared_ptr<ODERayShape> ODERayShapePtr;

    /// \def ODESurfaceParamsPtr
    /// \brief Boost shared pointer to ODESurfaceParams
    typedef  boost::shared_ptr<ODESurfaceParams> ODESurfaceParamsPtr;

    /// \def ODEPhysicsPtr
    /// \brief Boost shared pointer for ODEPhysics.
    typedef boost::shared_ptr<ODEPhysics> ODEPhysicsPtr;
  }
}
