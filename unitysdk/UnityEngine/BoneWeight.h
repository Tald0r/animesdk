#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_BONEWEIGHT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8F91E0)
#define UNITYENGINE_BONEWEIGHT_EQUALS_OFFSET UNITYSDK_OFFSET(0x8F9130)
#define UNITYENGINE_BONEWEIGHT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8F9090)
#define UNITYENGINE_BONEWEIGHT_GET_BONEINDEX0_OFFSET UNITYSDK_OFFSET(0x2CB090)
#define UNITYENGINE_BONEWEIGHT_GET_BONEINDEX1_OFFSET UNITYSDK_OFFSET(0x34CDD0)
#define UNITYENGINE_BONEWEIGHT_GET_BONEINDEX2_OFFSET UNITYSDK_OFFSET(0x359050)
#define UNITYENGINE_BONEWEIGHT_GET_BONEINDEX3_OFFSET UNITYSDK_OFFSET(0x3840E0)
#define UNITYENGINE_BONEWEIGHT_GET_WEIGHT0_OFFSET UNITYSDK_OFFSET(0x2C4AF0)
#define UNITYENGINE_BONEWEIGHT_GET_WEIGHT1_OFFSET UNITYSDK_OFFSET(0x2C4B10)
#define UNITYENGINE_BONEWEIGHT_GET_WEIGHT2_OFFSET UNITYSDK_OFFSET(0x2C4B30)
#define UNITYENGINE_BONEWEIGHT_GET_WEIGHT3_OFFSET UNITYSDK_OFFSET(0x2D8630)
#define UNITYENGINE_BONEWEIGHT_SET_BONEINDEX0_OFFSET UNITYSDK_OFFSET(0x3197D0)
#define UNITYENGINE_BONEWEIGHT_SET_BONEINDEX1_OFFSET UNITYSDK_OFFSET(0x34CE60)
#define UNITYENGINE_BONEWEIGHT_SET_BONEINDEX2_OFFSET UNITYSDK_OFFSET(0x379D90)
#define UNITYENGINE_BONEWEIGHT_SET_BONEINDEX3_OFFSET UNITYSDK_OFFSET(0x3840F0)
#define UNITYENGINE_BONEWEIGHT_SET_WEIGHT0_OFFSET UNITYSDK_OFFSET(0x2C4B00)
#define UNITYENGINE_BONEWEIGHT_SET_WEIGHT1_OFFSET UNITYSDK_OFFSET(0x2C4B20)
#define UNITYENGINE_BONEWEIGHT_SET_WEIGHT2_OFFSET UNITYSDK_OFFSET(0x2C4B40)
#define UNITYENGINE_BONEWEIGHT_SET_WEIGHT3_OFFSET UNITYSDK_OFFSET(0x33FDA0)

namespace UnityEngine
{
	inline static constexpr unsigned int BoneWeight_TypeDefinitionIndex = 5264;

	struct alignas(4) BoneWeight
	{
		::System::Single m_Weight0; // 0x10
		::System::Single m_Weight1; // 0x14
		::System::Single m_Weight2; // 0x18
		::System::Single m_Weight3; // 0x1C
		::System::Int32 m_BoneIndex0; // 0x20
		::System::Int32 m_BoneIndex1; // 0x24
		::System::Int32 m_BoneIndex2; // 0x28
		::System::Int32 m_BoneIndex3; // 0x2C

		::System::Single get_weight0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_GET_WEIGHT0_OFFSET))(this);
		}

		::System::Void set_weight0(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_SET_WEIGHT0_OFFSET))(this, value);
		}

		::System::Single get_weight1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_GET_WEIGHT1_OFFSET))(this);
		}

		::System::Void set_weight1(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_SET_WEIGHT1_OFFSET))(this, value);
		}

		::System::Single get_weight2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_GET_WEIGHT2_OFFSET))(this);
		}

		::System::Void set_weight2(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_SET_WEIGHT2_OFFSET))(this, value);
		}

		::System::Single get_weight3()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_GET_WEIGHT3_OFFSET))(this);
		}

		::System::Void set_weight3(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_SET_WEIGHT3_OFFSET))(this, value);
		}

		::System::Int32 get_boneIndex0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_GET_BONEINDEX0_OFFSET))(this);
		}

		::System::Void set_boneIndex0(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_SET_BONEINDEX0_OFFSET))(this, value);
		}

		::System::Int32 get_boneIndex1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_GET_BONEINDEX1_OFFSET))(this);
		}

		::System::Void set_boneIndex1(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_SET_BONEINDEX1_OFFSET))(this, value);
		}

		::System::Int32 get_boneIndex2()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_GET_BONEINDEX2_OFFSET))(this);
		}

		::System::Void set_boneIndex2(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_SET_BONEINDEX2_OFFSET))(this, value);
		}

		::System::Int32 get_boneIndex3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_GET_BONEINDEX3_OFFSET))(this);
		}

		::System::Void set_boneIndex3(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_SET_BONEINDEX3_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::UnityEngine::BoneWeight other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::BoneWeight))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_EQUALS_1_OFFSET))(this, other);
		}
	};
}
