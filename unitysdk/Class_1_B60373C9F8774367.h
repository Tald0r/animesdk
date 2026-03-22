#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Clamped_1.h"
#include "unitysdk/Foundation/DualQuaternion.h"
#include "unitysdk/Foundation/Geometry/ExtendConvexHull2D/ConvexHull.h"
#include "unitysdk/Foundation/Geometry/ExtendConvexHull2D/ConvexHullBuffer.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/PipelineCamera/WorldScreenCameraData.h"
#include "unitysdk/Struct_2_9F85650CFFBE9F44.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_B60373C9F8774367_METHOD_1_1790C9BB34C526E9_OFFSET UNITYSDK_OFFSET(0x8892870)
#define CLASS_1_B60373C9F8774367_METHOD_1_2F375D2FC26A1523_OFFSET UNITYSDK_OFFSET(0x88928D0)
#define CLASS_1_B60373C9F8774367_METHOD_1_54F3D42A37580F12_OFFSET UNITYSDK_OFFSET(0x888B540)
#define CLASS_1_B60373C9F8774367_METHOD_1_63DF395B3BDEB938_OFFSET UNITYSDK_OFFSET(0x88934C0)
#define CLASS_1_B60373C9F8774367_METHOD_1_7FBE9A14E3D5CF9D_OFFSET UNITYSDK_OFFSET(0x88935C0)
#define CLASS_1_B60373C9F8774367_METHOD_1_8083FEBFE16F3196_OFFSET UNITYSDK_OFFSET(0x888B220)
#define CLASS_1_B60373C9F8774367_METHOD_1_81984DEA6FF3F08F_OFFSET UNITYSDK_OFFSET(0x88916A0)
#define CLASS_1_B60373C9F8774367_METHOD_1_A3E416C233D305F8_OFFSET UNITYSDK_OFFSET(0x8894730)
#define CLASS_1_B60373C9F8774367_METHOD_1_ABFAC0EC1D3B5CF4_1_OFFSET UNITYSDK_OFFSET(0x8894C10)
#define CLASS_1_B60373C9F8774367_METHOD_1_ABFAC0EC1D3B5CF4_OFFSET UNITYSDK_OFFSET(0x88935B0)
#define CLASS_1_B60373C9F8774367_METHOD_1_BB4FA584E8AD685A_1_OFFSET UNITYSDK_OFFSET(0x88928C0)
#define CLASS_1_B60373C9F8774367_METHOD_1_BB4FA584E8AD685A_2_OFFSET UNITYSDK_OFFSET(0x8894C60)
#define CLASS_1_B60373C9F8774367_METHOD_1_BB4FA584E8AD685A_3_OFFSET UNITYSDK_OFFSET(0x8894C70)
#define CLASS_1_B60373C9F8774367_METHOD_1_BB4FA584E8AD685A_4_OFFSET UNITYSDK_OFFSET(0x8894C80)
#define CLASS_1_B60373C9F8774367_METHOD_1_BB4FA584E8AD685A_OFFSET UNITYSDK_OFFSET(0x8892880)
#define CLASS_1_B60373C9F8774367_METHOD_1_BC4B58627F534F7C_OFFSET UNITYSDK_OFFSET(0x8894C30)
#define CLASS_1_B60373C9F8774367_METHOD_1_BEFAF0F3CCD3E6E0_OFFSET UNITYSDK_OFFSET(0x8893720)
#define CLASS_1_B60373C9F8774367_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8891640)
#define CLASS_1_B60373C9F8774367_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x888B4B0)
#define CLASS_1_B60373C9F8774367_METHOD_1_CC1B635418AD2262_1_OFFSET UNITYSDK_OFFSET(0x8892890)
#define CLASS_1_B60373C9F8774367_METHOD_1_CC1B635418AD2262_OFFSET UNITYSDK_OFFSET(0x888B510)
#define CLASS_1_B60373C9F8774367__CTOR_OFFSET UNITYSDK_OFFSET(0x888B200)

inline static constexpr unsigned int Class_1_B60373C9F8774367_TypeDefinitionIndex = 39067;

class Class_1_B60373C9F8774367 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_7 = 0x10; // 0x0
	::UnityEngine::AnimationCurve* Field_1_12; // 0x10
	::UnityEngine::AnimationCurve* Field_1_9; // 0x18
	::Foundation::Clamped_1<::System::Single> Field_1_0; // 0x20
	::UnityEngine::AnimationCurve* Field_1_8; // 0x38
	::UnityEngine::AnimationCurve* Field_1_10; // 0x40
	::UnityEngine::AnimationCurve* Field_1_11; // 0x48
	::System::Single Field_1_5; // 0x50
	::System::Boolean Field_1_6; // 0x54
	::System::Single Field_1_2; // 0x58
	::PipelineCamera::WorldBasicCameraData Field_1_1; // 0x5C
	::System::Single Field_1_3; // 0x88
	::System::Single Field_1_4; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B60373C9F8774367__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_8083FEBFE16F3196(::System::Single a1, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull a2, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull a3)
	{
		return ((::System::Boolean(*)(::System::Single, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull))((::PBYTE)hIl2Cpp + CLASS_1_B60373C9F8774367_METHOD_1_8083FEBFE16F3196_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B60373C9F8774367_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_1_B60373C9F8774367* Method_1_CC1B635418AD2262(::System::Single a1)
	{
		return ((::Class_1_B60373C9F8774367*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B60373C9F8774367_METHOD_1_CC1B635418AD2262_OFFSET))(this, a1);
	}

	static ::System::Single Method_1_54F3D42A37580F12(::Foundation::DualQuaternion a1, ::UnityEngine::Bounds a2, ::UnityEngine::Bounds a3)
	{
		return ((::System::Single(*)(::Foundation::DualQuaternion, ::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_1_B60373C9F8774367_METHOD_1_54F3D42A37580F12_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B60373C9F8774367_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_1_81984DEA6FF3F08F(::PipelineCamera::WorldScreenCameraData& a1, ::System::Single a2, ::Struct_2_9F85650CFFBE9F44 a3, ::Struct_2_9F85650CFFBE9F44 a4, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer a5, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer a6)
	{
		return ((::System::Void(*)(::PipelineCamera::WorldScreenCameraData&, ::System::Single, ::Struct_2_9F85650CFFBE9F44, ::Struct_2_9F85650CFFBE9F44, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer))((::PBYTE)hIl2Cpp + CLASS_1_B60373C9F8774367_METHOD_1_81984DEA6FF3F08F_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::Class_1_B60373C9F8774367* Method_1_1790C9BB34C526E9(::System::Boolean a1)
	{
		return ((::Class_1_B60373C9F8774367*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B60373C9F8774367_METHOD_1_1790C9BB34C526E9_OFFSET))(this, a1);
	}

	::Class_1_B60373C9F8774367* Method_1_BB4FA584E8AD685A(::UnityEngine::AnimationCurve* a1)
	{
		return ((::Class_1_B60373C9F8774367*(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_B60373C9F8774367_METHOD_1_BB4FA584E8AD685A_OFFSET))(this, a1);
	}

	::Class_1_B60373C9F8774367* Method_1_CC1B635418AD2262_1(::System::Single a1)
	{
		return ((::Class_1_B60373C9F8774367*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B60373C9F8774367_METHOD_1_CC1B635418AD2262_1_OFFSET))(this, a1);
	}

	::Class_1_B60373C9F8774367* Method_1_BB4FA584E8AD685A_1(::UnityEngine::AnimationCurve* a1)
	{
		return ((::Class_1_B60373C9F8774367*(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_B60373C9F8774367_METHOD_1_BB4FA584E8AD685A_1_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_2F375D2FC26A1523(::PipelineCamera::WorldScreenCameraData& a1, ::System::Single a2, ::Struct_2_9F85650CFFBE9F44 a3, ::Struct_2_9F85650CFFBE9F44 a4, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer a5, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer a6)
	{
		return ((::System::Void(*)(::PipelineCamera::WorldScreenCameraData&, ::System::Single, ::Struct_2_9F85650CFFBE9F44, ::Struct_2_9F85650CFFBE9F44, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer))((::PBYTE)hIl2Cpp + CLASS_1_B60373C9F8774367_METHOD_1_2F375D2FC26A1523_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::Class_1_B60373C9F8774367* Method_1_63DF395B3BDEB938(::System::Single a1, ::System::Single a2)
	{
		return ((::Class_1_B60373C9F8774367*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B60373C9F8774367_METHOD_1_63DF395B3BDEB938_OFFSET))(this, a1, a2);
	}

	::Class_1_B60373C9F8774367* Method_1_ABFAC0EC1D3B5CF4(::System::Single a1)
	{
		return ((::Class_1_B60373C9F8774367*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B60373C9F8774367_METHOD_1_ABFAC0EC1D3B5CF4_OFFSET))(this, a1);
	}

	static ::System::Single Method_1_7FBE9A14E3D5CF9D(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B60373C9F8774367_METHOD_1_7FBE9A14E3D5CF9D_OFFSET))(a1, a2, a3, a4);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_BEFAF0F3CCD3E6E0(::Struct_2_9F85650CFFBE9F44 a1, ::Struct_2_9F85650CFFBE9F44 a2, ::System::Single a3)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::Struct_2_9F85650CFFBE9F44, ::Struct_2_9F85650CFFBE9F44, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B60373C9F8774367_METHOD_1_BEFAF0F3CCD3E6E0_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_1_A3E416C233D305F8(::System::Single a1, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull a2, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull a3)
	{
		return ((::System::Boolean(*)(::System::Single, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull))((::PBYTE)hIl2Cpp + CLASS_1_B60373C9F8774367_METHOD_1_A3E416C233D305F8_OFFSET))(a1, a2, a3);
	}

	::Class_1_B60373C9F8774367* Method_1_ABFAC0EC1D3B5CF4_1(::System::Single a1)
	{
		return ((::Class_1_B60373C9F8774367*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B60373C9F8774367_METHOD_1_ABFAC0EC1D3B5CF4_1_OFFSET))(this, a1);
	}

	::Class_1_B60373C9F8774367* Method_1_BC4B58627F534F7C(::PipelineCamera::WorldBasicCameraData a1)
	{
		return ((::Class_1_B60373C9F8774367*(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + CLASS_1_B60373C9F8774367_METHOD_1_BC4B58627F534F7C_OFFSET))(this, a1);
	}

	::Class_1_B60373C9F8774367* Method_1_BB4FA584E8AD685A_2(::UnityEngine::AnimationCurve* a1)
	{
		return ((::Class_1_B60373C9F8774367*(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_B60373C9F8774367_METHOD_1_BB4FA584E8AD685A_2_OFFSET))(this, a1);
	}

	::Class_1_B60373C9F8774367* Method_1_BB4FA584E8AD685A_3(::UnityEngine::AnimationCurve* a1)
	{
		return ((::Class_1_B60373C9F8774367*(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_B60373C9F8774367_METHOD_1_BB4FA584E8AD685A_3_OFFSET))(this, a1);
	}

	::Class_1_B60373C9F8774367* Method_1_BB4FA584E8AD685A_4(::UnityEngine::AnimationCurve* a1)
	{
		return ((::Class_1_B60373C9F8774367*(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_B60373C9F8774367_METHOD_1_BB4FA584E8AD685A_4_OFFSET))(this, a1);
	}
};
