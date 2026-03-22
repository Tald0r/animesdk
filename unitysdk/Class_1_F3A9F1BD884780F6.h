#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_50BF4F6DB8616D8D_1.h"
#include "unitysdk/Spine/Unity/UpdateTiming.h"
#include "unitysdk/System/Object.h"

class Class_1_6A348FE6C41CBDE0;
namespace Spine { class Animation; }
namespace Spine { class AnimationState; }
namespace Spine { class TrackEntry; }
namespace Spine::Unity { class SkeletonAnimation; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_F3A9F1BD884780F6_METHOD_1_295B0FA1282F1A6E_OFFSET UNITYSDK_OFFSET(0x83F5CF0)
#define CLASS_1_F3A9F1BD884780F6_METHOD_1_31874D72F4C51A9E_OFFSET UNITYSDK_OFFSET(0x83F5680)
#define CLASS_1_F3A9F1BD884780F6_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x83F5850)
#define CLASS_1_F3A9F1BD884780F6_METHOD_1_4BD2BFB48FF90060_OFFSET UNITYSDK_OFFSET(0x83F5590)
#define CLASS_1_F3A9F1BD884780F6_METHOD_1_56F7FADC785D9396_OFFSET UNITYSDK_OFFSET(0x83F5DC0)
#define CLASS_1_F3A9F1BD884780F6_METHOD_1_67C2A1EEB4412208_OFFSET UNITYSDK_OFFSET(0x83F5770)
#define CLASS_1_F3A9F1BD884780F6_METHOD_1_71F164751C06B076_OFFSET UNITYSDK_OFFSET(0x83F5BF0)
#define CLASS_1_F3A9F1BD884780F6_METHOD_1_7485CD9A19C5BF67_OFFSET UNITYSDK_OFFSET(0x83F5940)
#define CLASS_1_F3A9F1BD884780F6_METHOD_1_7C72F0C77B62203F_OFFSET UNITYSDK_OFFSET(0x83F5B70)
#define CLASS_1_F3A9F1BD884780F6_METHOD_1_8F1D3DCE7C3B9265_OFFSET UNITYSDK_OFFSET(0x83F5A60)
#define CLASS_1_F3A9F1BD884780F6_METHOD_1_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x83F5330)
#define CLASS_1_F3A9F1BD884780F6_METHOD_1_C8C734C3DCF2974B_OFFSET UNITYSDK_OFFSET(0x83F5230)
#define CLASS_1_F3A9F1BD884780F6_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x83F5C90)
#define CLASS_1_F3A9F1BD884780F6_METHOD_1_CA5DC148BF79E282_OFFSET UNITYSDK_OFFSET(0x83F5480)
#define CLASS_1_F3A9F1BD884780F6_METHOD_1_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x83F5EF0)
#define CLASS_1_F3A9F1BD884780F6_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x83F5F60)
#define CLASS_1_F3A9F1BD884780F6__CTOR_OFFSET UNITYSDK_OFFSET(0x83F5220)

inline static constexpr unsigned int Class_1_F3A9F1BD884780F6_TypeDefinitionIndex = 72739;

class Class_1_F3A9F1BD884780F6 : public ::System::Object
{
public:
	::Spine::AnimationState* Field_1_4; // 0x10
	::Class_1_6A348FE6C41CBDE0* Field_1_5; // 0x18
	::UnityEngine::GameObject* Field_1_2; // 0x20
	::System::Action_2<::Class_1_F3A9F1BD884780F6*, ::System::Boolean>* Field_1_6; // 0x28
	::Spine::Unity::SkeletonAnimation* Field_1_3; // 0x30
	::Enum_3_50BF4F6DB8616D8D_1 Field_1_1; // 0x38
	::Spine::Unity::UpdateTiming Field_1_0; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3A9F1BD884780F6__CTOR_OFFSET))(this);
	}

	::Spine::TrackEntry* Method_1_C8C734C3DCF2974B(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3)
	{
		return ((::Spine::TrackEntry*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3A9F1BD884780F6_METHOD_1_C8C734C3DCF2974B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3A9F1BD884780F6_METHOD_1_8F7825DAFFB9B517_OFFSET))(this);
	}

	::Spine::TrackEntry* Method_1_CA5DC148BF79E282(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3)
	{
		return ((::Spine::TrackEntry*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3A9F1BD884780F6_METHOD_1_CA5DC148BF79E282_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4BD2BFB48FF90060(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F3A9F1BD884780F6_METHOD_1_4BD2BFB48FF90060_OFFSET))(this, a1);
	}

	::System::Void Method_1_31874D72F4C51A9E(::Spine::Unity::UpdateTiming a1)
	{
		return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateTiming))((::PBYTE)hIl2Cpp + CLASS_1_F3A9F1BD884780F6_METHOD_1_31874D72F4C51A9E_OFFSET))(this, a1);
	}

	::System::Void Method_1_67C2A1EEB4412208(::System::Action_2<::Class_1_F3A9F1BD884780F6*, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_F3A9F1BD884780F6*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_F3A9F1BD884780F6_METHOD_1_67C2A1EEB4412208_OFFSET))(this, a1);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3A9F1BD884780F6_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_7485CD9A19C5BF67(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_F3A9F1BD884780F6_METHOD_1_7485CD9A19C5BF67_OFFSET))(this, a1);
	}

	::Spine::TrackEntry* Method_1_8F1D3DCE7C3B9265(::System::Single a1, ::System::Int32 a2)
	{
		return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3A9F1BD884780F6_METHOD_1_8F1D3DCE7C3B9265_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7C72F0C77B62203F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3A9F1BD884780F6_METHOD_1_7C72F0C77B62203F_OFFSET))(this, a1);
	}

	::Spine::Animation* Method_1_71F164751C06B076(::System::String* a1)
	{
		return ((::Spine::Animation*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3A9F1BD884780F6_METHOD_1_71F164751C06B076_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3A9F1BD884780F6_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_295B0FA1282F1A6E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3A9F1BD884780F6_METHOD_1_295B0FA1282F1A6E_OFFSET))(this, a1);
	}

	::Spine::TrackEntry* Method_1_56F7FADC785D9396(::System::String* a1, ::System::Boolean a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::Spine::TrackEntry*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3A9F1BD884780F6_METHOD_1_56F7FADC785D9396_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3A9F1BD884780F6_METHOD_1_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F3A9F1BD884780F6_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}
};
