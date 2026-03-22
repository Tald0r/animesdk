#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Transform; }

#define FOUNDATION_DEBUGDRAW_DEBUGARROW_1_OFFSET UNITYSDK_OFFSET(0x1A8580E0)
#define FOUNDATION_DEBUGDRAW_DEBUGARROW_2_OFFSET UNITYSDK_OFFSET(0x1A8581E0)
#define FOUNDATION_DEBUGDRAW_DEBUGARROW_OFFSET UNITYSDK_OFFSET(0x1A857E00)
#define FOUNDATION_DEBUGDRAW_DEBUGBOUNDS_1_OFFSET UNITYSDK_OFFSET(0x1A853750)
#define FOUNDATION_DEBUGDRAW_DEBUGBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A852FE0)
#define FOUNDATION_DEBUGDRAW_DEBUGCAPSULE_1_OFFSET UNITYSDK_OFFSET(0x1A859810)
#define FOUNDATION_DEBUGDRAW_DEBUGCAPSULE_OFFSET UNITYSDK_OFFSET(0x1A8582D0)
#define FOUNDATION_DEBUGDRAW_DEBUGCIRCLE_1_OFFSET UNITYSDK_OFFSET(0x1A855780)
#define FOUNDATION_DEBUGDRAW_DEBUGCIRCLE_2_OFFSET UNITYSDK_OFFSET(0x1A855890)
#define FOUNDATION_DEBUGDRAW_DEBUGCIRCLE_3_OFFSET UNITYSDK_OFFSET(0x1A8559B0)
#define FOUNDATION_DEBUGDRAW_DEBUGCIRCLE_OFFSET UNITYSDK_OFFSET(0x1A855200)
#define FOUNDATION_DEBUGDRAW_DEBUGCONE_1_OFFSET UNITYSDK_OFFSET(0x1A857960)
#define FOUNDATION_DEBUGDRAW_DEBUGCONE_2_OFFSET UNITYSDK_OFFSET(0x1A857A80)
#define FOUNDATION_DEBUGDRAW_DEBUGCONE_3_OFFSET UNITYSDK_OFFSET(0x1A857B90)
#define FOUNDATION_DEBUGDRAW_DEBUGCONE_OFFSET UNITYSDK_OFFSET(0x1A856AF0)
#define FOUNDATION_DEBUGDRAW_DEBUGCYLINDER_1_OFFSET UNITYSDK_OFFSET(0x1A8569D0)
#define FOUNDATION_DEBUGDRAW_DEBUGCYLINDER_OFFSET UNITYSDK_OFFSET(0x1A856080)
#define FOUNDATION_DEBUGDRAW_DEBUGLINE_OFFSET UNITYSDK_OFFSET(0x1A857C80)
#define FOUNDATION_DEBUGDRAW_DEBUGLOCALCUBE_1_OFFSET UNITYSDK_OFFSET(0x1A854410)
#define FOUNDATION_DEBUGDRAW_DEBUGLOCALCUBE_2_OFFSET UNITYSDK_OFFSET(0x1A854520)
#define FOUNDATION_DEBUGDRAW_DEBUGLOCALCUBE_3_OFFSET UNITYSDK_OFFSET(0x1A855080)
#define FOUNDATION_DEBUGDRAW_DEBUGLOCALCUBE_OFFSET UNITYSDK_OFFSET(0x1A853810)
#define FOUNDATION_DEBUGDRAW_DEBUGPOINT_1_OFFSET UNITYSDK_OFFSET(0x1A852F10)
#define FOUNDATION_DEBUGDRAW_DEBUGPOINT_OFFSET UNITYSDK_OFFSET(0x1A852AB0)
#define FOUNDATION_DEBUGDRAW_DEBUGWIRESPHERE_1_OFFSET UNITYSDK_OFFSET(0x1A855FB0)
#define FOUNDATION_DEBUGDRAW_DEBUGWIRESPHERE_OFFSET UNITYSDK_OFFSET(0x1A855AA0)
#define FOUNDATION_DEBUGDRAW_DRAWARROW_1_OFFSET UNITYSDK_OFFSET(0x1A85DCB0)
#define FOUNDATION_DEBUGDRAW_DRAWARROW_OFFSET UNITYSDK_OFFSET(0x1A85DA40)
#define FOUNDATION_DEBUGDRAW_DRAWBOUNDS_1_OFFSET UNITYSDK_OFFSET(0x1A85A0C0)
#define FOUNDATION_DEBUGDRAW_DRAWBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A859C30)
#define FOUNDATION_DEBUGDRAW_DRAWCAPSULE_1_OFFSET UNITYSDK_OFFSET(0x1A85FD00)
#define FOUNDATION_DEBUGDRAW_DRAWCAPSULE_OFFSET UNITYSDK_OFFSET(0x1A85E6C0)
#define FOUNDATION_DEBUGDRAW_DRAWCIRCLE_1_OFFSET UNITYSDK_OFFSET(0x1A85BE30)
#define FOUNDATION_DEBUGDRAW_DRAWCIRCLE_2_OFFSET UNITYSDK_OFFSET(0x1A85BF20)
#define FOUNDATION_DEBUGDRAW_DRAWCIRCLE_3_OFFSET UNITYSDK_OFFSET(0x1A85C010)
#define FOUNDATION_DEBUGDRAW_DRAWCIRCLE_OFFSET UNITYSDK_OFFSET(0x1A85B890)
#define FOUNDATION_DEBUGDRAW_DRAWCONE_1_OFFSET UNITYSDK_OFFSET(0x1A85D7B0)
#define FOUNDATION_DEBUGDRAW_DRAWCONE_2_OFFSET UNITYSDK_OFFSET(0x1A85D890)
#define FOUNDATION_DEBUGDRAW_DRAWCONE_3_OFFSET UNITYSDK_OFFSET(0x1A85D970)
#define FOUNDATION_DEBUGDRAW_DRAWCONE_OFFSET UNITYSDK_OFFSET(0x1A85CB20)
#define FOUNDATION_DEBUGDRAW_DRAWCYLINDER_1_OFFSET UNITYSDK_OFFSET(0x1A85CA40)
#define FOUNDATION_DEBUGDRAW_DRAWCYLINDER_2_OFFSET UNITYSDK_OFFSET(0x1A85DD80)
#define FOUNDATION_DEBUGDRAW_DRAWCYLINDER_OFFSET UNITYSDK_OFFSET(0x1A85C0E0)
#define FOUNDATION_DEBUGDRAW_DRAWLOCALCUBE_1_OFFSET UNITYSDK_OFFSET(0x1A85AA70)
#define FOUNDATION_DEBUGDRAW_DRAWLOCALCUBE_2_OFFSET UNITYSDK_OFFSET(0x1A85AB40)
#define FOUNDATION_DEBUGDRAW_DRAWLOCALCUBE_3_OFFSET UNITYSDK_OFFSET(0x1A85B740)
#define FOUNDATION_DEBUGDRAW_DRAWLOCALCUBE_OFFSET UNITYSDK_OFFSET(0x1A85A160)
#define FOUNDATION_DEBUGDRAW_DRAWPOINT_1_OFFSET UNITYSDK_OFFSET(0x1A859B80)
#define FOUNDATION_DEBUGDRAW_DRAWPOINT_OFFSET UNITYSDK_OFFSET(0x1A859930)
#define FOUNDATION_DEBUGDRAW_DRAWSPHERE_OFFSET UNITYSDK_OFFSET(0x1A85C840)
#define FOUNDATION_DEBUGDRAW_DRAWWIRESPHERE_OFFSET UNITYSDK_OFFSET(0x1A85C940)
#define FOUNDATION_DEBUGDRAW_METHODSOFOBJECT_OFFSET UNITYSDK_OFFSET(0x1A85FDF0)
#define FOUNDATION_DEBUGDRAW_METHODSOFTYPE_OFFSET UNITYSDK_OFFSET(0x1A85FF80)

namespace Foundation
{
	inline static constexpr unsigned int DebugDraw_TypeDefinitionIndex = 8304;

	class DebugDraw : public ::System::Object
	{
	public:
		static ::System::Void DebugPoint(::UnityEngine::Vector3 position, ::UnityEngine::Color color, ::System::Single scale, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DEBUGPOINT_OFFSET))(position, color, scale, duration, depthTest);
		}

		static ::System::Void DebugPoint_1(::UnityEngine::Vector3 position, ::System::Single scale, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DEBUGPOINT_1_OFFSET))(position, scale, duration, depthTest);
		}

		static ::System::Void DebugBounds(::UnityEngine::Bounds bounds, ::UnityEngine::Color color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Bounds, ::UnityEngine::Color, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DEBUGBOUNDS_OFFSET))(bounds, color, duration, depthTest);
		}

		static ::System::Void DebugBounds_1(::UnityEngine::Bounds bounds, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Bounds, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DEBUGBOUNDS_1_OFFSET))(bounds, duration, depthTest);
		}

		static ::System::Void DebugLocalCube(::UnityEngine::Transform* transform, ::UnityEngine::Vector3 size, ::UnityEngine::Color color, ::UnityEngine::Vector3 center, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Color, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DEBUGLOCALCUBE_OFFSET))(transform, size, color, center, duration, depthTest);
		}

		static ::System::Void DebugLocalCube_1(::UnityEngine::Transform* transform, ::UnityEngine::Vector3 size, ::UnityEngine::Vector3 center, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DEBUGLOCALCUBE_1_OFFSET))(transform, size, center, duration, depthTest);
		}

		static ::System::Void DebugLocalCube_2(::UnityEngine::Matrix4x4 space, ::UnityEngine::Vector3 size, ::UnityEngine::Color color, ::UnityEngine::Vector3 center, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Vector3, ::UnityEngine::Color, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DEBUGLOCALCUBE_2_OFFSET))(space, size, color, center, duration, depthTest);
		}

		static ::System::Void DebugLocalCube_3(::UnityEngine::Matrix4x4 space, ::UnityEngine::Vector3 size, ::UnityEngine::Vector3 center, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DEBUGLOCALCUBE_3_OFFSET))(space, size, center, duration, depthTest);
		}

		static ::System::Void DebugCircle(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 up, ::UnityEngine::Color color, ::System::Single radius, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DEBUGCIRCLE_OFFSET))(position, up, color, radius, duration, depthTest);
		}

		static ::System::Void DebugCircle_1(::UnityEngine::Vector3 position, ::UnityEngine::Color color, ::System::Single radius, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DEBUGCIRCLE_1_OFFSET))(position, color, radius, duration, depthTest);
		}

		static ::System::Void DebugCircle_2(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 up, ::System::Single radius, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DEBUGCIRCLE_2_OFFSET))(position, up, radius, duration, depthTest);
		}

		static ::System::Void DebugCircle_3(::UnityEngine::Vector3 position, ::System::Single radius, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DEBUGCIRCLE_3_OFFSET))(position, radius, duration, depthTest);
		}

		static ::System::Void DebugWireSphere(::UnityEngine::Vector3 position, ::UnityEngine::Color color, ::System::Single radius, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DEBUGWIRESPHERE_OFFSET))(position, color, radius, duration, depthTest);
		}

		static ::System::Void DebugWireSphere_1(::UnityEngine::Vector3 position, ::System::Single radius, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DEBUGWIRESPHERE_1_OFFSET))(position, radius, duration, depthTest);
		}

		static ::System::Void DebugCylinder(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Color color, ::System::Single radius, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DEBUGCYLINDER_OFFSET))(start, end, color, radius, duration, depthTest);
		}

		static ::System::Void DebugCylinder_1(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::System::Single radius, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DEBUGCYLINDER_1_OFFSET))(start, end, radius, duration, depthTest);
		}

		static ::System::Void DebugCone(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 direction, ::UnityEngine::Color color, ::System::Single angle, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DEBUGCONE_OFFSET))(position, direction, color, angle, duration, depthTest);
		}

		static ::System::Void DebugCone_1(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 direction, ::System::Single angle, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DEBUGCONE_1_OFFSET))(position, direction, angle, duration, depthTest);
		}

		static ::System::Void DebugCone_2(::UnityEngine::Vector3 position, ::UnityEngine::Color color, ::System::Single angle, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DEBUGCONE_2_OFFSET))(position, color, angle, duration, depthTest);
		}

		static ::System::Void DebugCone_3(::UnityEngine::Vector3 position, ::System::Single angle, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DEBUGCONE_3_OFFSET))(position, angle, duration, depthTest);
		}

		static ::System::Void DebugLine(::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 endPos, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DEBUGLINE_OFFSET))(startPos, endPos, color);
		}

		static ::System::Void DebugArrow(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 direction, ::UnityEngine::Color color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DEBUGARROW_OFFSET))(position, direction, color, duration, depthTest);
		}

		static ::System::Void DebugArrow_1(::UnityEngine::Vector3 target, ::UnityEngine::Color color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DEBUGARROW_1_OFFSET))(target, color, duration, depthTest);
		}

		static ::System::Void DebugArrow_2(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 direction, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DEBUGARROW_2_OFFSET))(position, direction, duration, depthTest);
		}

		static ::System::Void DebugCapsule(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Color color, ::System::Single radius, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DEBUGCAPSULE_OFFSET))(start, end, color, radius, duration, depthTest);
		}

		static ::System::Void DebugCapsule_1(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::System::Single radius, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DEBUGCAPSULE_1_OFFSET))(start, end, radius, duration, depthTest);
		}

		static ::System::Void DrawPoint(::UnityEngine::Vector3 position, ::UnityEngine::Color color, ::System::Single scale)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DRAWPOINT_OFFSET))(position, color, scale);
		}

		static ::System::Void DrawPoint_1(::UnityEngine::Vector3 position, ::System::Single scale)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DRAWPOINT_1_OFFSET))(position, scale);
		}

		static ::System::Void DrawBounds(::UnityEngine::Bounds bounds, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Bounds, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DRAWBOUNDS_OFFSET))(bounds, color);
		}

		static ::System::Void DrawBounds_1(::UnityEngine::Bounds bounds)
		{
			return ((::System::Void(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DRAWBOUNDS_1_OFFSET))(bounds);
		}

		static ::System::Void DrawLocalCube(::UnityEngine::Transform* transform, ::UnityEngine::Vector3 size, ::UnityEngine::Color color, ::UnityEngine::Vector3 center)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Color, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DRAWLOCALCUBE_OFFSET))(transform, size, color, center);
		}

		static ::System::Void DrawLocalCube_1(::UnityEngine::Transform* transform, ::UnityEngine::Vector3 size, ::UnityEngine::Vector3 center)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DRAWLOCALCUBE_1_OFFSET))(transform, size, center);
		}

		static ::System::Void DrawLocalCube_2(::UnityEngine::Matrix4x4 space, ::UnityEngine::Vector3 size, ::UnityEngine::Color color, ::UnityEngine::Vector3 center, ::System::Single duration)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Vector3, ::UnityEngine::Color, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DRAWLOCALCUBE_2_OFFSET))(space, size, color, center, duration);
		}

		static ::System::Void DrawLocalCube_3(::UnityEngine::Matrix4x4 space, ::UnityEngine::Vector3 size, ::UnityEngine::Vector3 center)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DRAWLOCALCUBE_3_OFFSET))(space, size, center);
		}

		static ::System::Void DrawCircle(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 up, ::UnityEngine::Color color, ::System::Single radius, ::System::Single duration)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DRAWCIRCLE_OFFSET))(position, up, color, radius, duration);
		}

		static ::System::Void DrawCircle_1(::UnityEngine::Vector3 position, ::UnityEngine::Color color, ::System::Single radius)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DRAWCIRCLE_1_OFFSET))(position, color, radius);
		}

		static ::System::Void DrawCircle_2(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 up, ::System::Single radius)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DRAWCIRCLE_2_OFFSET))(position, up, radius);
		}

		static ::System::Void DrawCircle_3(::UnityEngine::Vector3 position, ::System::Single radius)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DRAWCIRCLE_3_OFFSET))(position, radius);
		}

		static ::System::Void DrawCylinder(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Color color, ::System::Single radius)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DRAWCYLINDER_OFFSET))(start, end, color, radius);
		}

		static ::System::Void DrawSphere(::UnityEngine::Vector3 center, ::UnityEngine::Color color, ::System::Single radius)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DRAWSPHERE_OFFSET))(center, color, radius);
		}

		static ::System::Void DrawWireSphere(::UnityEngine::Vector3 center, ::UnityEngine::Color color, ::System::Single radius)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DRAWWIRESPHERE_OFFSET))(center, color, radius);
		}

		static ::System::Void DrawCylinder_1(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::System::Single radius)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DRAWCYLINDER_1_OFFSET))(start, end, radius);
		}

		static ::System::Void DrawCone(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 direction, ::UnityEngine::Color color, ::System::Single angle)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DRAWCONE_OFFSET))(position, direction, color, angle);
		}

		static ::System::Void DrawCone_1(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 direction, ::System::Single angle)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DRAWCONE_1_OFFSET))(position, direction, angle);
		}

		static ::System::Void DrawCone_2(::UnityEngine::Vector3 position, ::UnityEngine::Color color, ::System::Single angle)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DRAWCONE_2_OFFSET))(position, color, angle);
		}

		static ::System::Void DrawCone_3(::UnityEngine::Vector3 position, ::System::Single angle)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DRAWCONE_3_OFFSET))(position, angle);
		}

		static ::System::Void DrawArrow(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 direction, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DRAWARROW_OFFSET))(position, direction, color);
		}

		static ::System::Void DrawArrow_1(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 direction)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DRAWARROW_1_OFFSET))(position, direction);
		}

		static ::System::Void DrawCylinder_2(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Color color, ::System::Single radius, ::System::Single duration)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DRAWCYLINDER_2_OFFSET))(start, end, color, radius, duration);
		}

		static ::System::Void DrawCapsule(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Color color, ::System::Single radius, ::System::Single duration)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DRAWCAPSULE_OFFSET))(start, end, color, radius, duration);
		}

		static ::System::Void DrawCapsule_1(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::System::Single radius)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_DRAWCAPSULE_1_OFFSET))(start, end, radius);
		}

		static ::System::String* MethodsOfObject(::System::Object* obj, ::System::Boolean includeInfo)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_METHODSOFOBJECT_OFFSET))(obj, includeInfo);
		}

		static ::System::String* MethodsOfType(::System::Type* type, ::System::Boolean includeInfo)
		{
			return ((::System::String*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_DEBUGDRAW_METHODSOFTYPE_OFFSET))(type, includeInfo);
		}
	};
}
