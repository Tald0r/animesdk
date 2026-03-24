#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/DRect.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define DIGITALOPUS_MB_CORE_MATANDTRANSFORMTOMERGED_ASSIGNINITIALVALUESFORMATERIALTILINGANDSAMPLINGRECTMATANDUVTILING_OFFSET UNITYSDK_OFFSET(0x1A90F590)
#define DIGITALOPUS_MB_CORE_MATANDTRANSFORMTOMERGED_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A90F0A0)
#define DIGITALOPUS_MB_CORE_MATANDTRANSFORMTOMERGED_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A90F3A0)
#define DIGITALOPUS_MB_CORE_MATANDTRANSFORMTOMERGED_GETMATERIALNAME_OFFSET UNITYSDK_OFFSET(0x1A90F450)
#define DIGITALOPUS_MB_CORE_MATANDTRANSFORMTOMERGED_GET_MATERIALTILING_OFFSET UNITYSDK_OFFSET(0x1A90EFB0)
#define DIGITALOPUS_MB_CORE_MATANDTRANSFORMTOMERGED_GET_OBUVRECTIFTILINGSAME_OFFSET UNITYSDK_OFFSET(0x1A90EF50)
#define DIGITALOPUS_MB_CORE_MATANDTRANSFORMTOMERGED_GET_SAMPLINGRECTMATANDUVTILING_OFFSET UNITYSDK_OFFSET(0x1A90EF80)
#define DIGITALOPUS_MB_CORE_MATANDTRANSFORMTOMERGED_SET_MATERIALTILING_OFFSET UNITYSDK_OFFSET(0x1A90EFD0)
#define DIGITALOPUS_MB_CORE_MATANDTRANSFORMTOMERGED_SET_OBUVRECTIFTILINGSAME_OFFSET UNITYSDK_OFFSET(0x1A90EF70)
#define DIGITALOPUS_MB_CORE_MATANDTRANSFORMTOMERGED_SET_SAMPLINGRECTMATANDUVTILING_OFFSET UNITYSDK_OFFSET(0x1A90EFA0)
#define DIGITALOPUS_MB_CORE_MATANDTRANSFORMTOMERGED__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A90F060)
#define DIGITALOPUS_MB_CORE_MATANDTRANSFORMTOMERGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1A90EFE0)
#define DIGITALOPUS_MB_CORE_MATANDTRANSFORMTOMERGED__INIT_OFFSET UNITYSDK_OFFSET(0x1A90F020)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MatAndTransformToMerged_TypeDefinitionIndex = 83399;

	class MatAndTransformToMerged : public ::System::Object
	{
	public:
		::System::String* objName; // 0x10
		::UnityEngine::Material* mat; // 0x18
		::DigitalOpus::MB::Core::DRect _obUVRectIfTilingSame_k__BackingField; // 0x20
		::DigitalOpus::MB::Core::DRect _samplingRectMatAndUVTiling_k__BackingField; // 0x40
		::DigitalOpus::MB::Core::DRect _materialTiling_k__BackingField; // 0x60

		::System::Void _ctor(::DigitalOpus::MB::Core::DRect obUVrect, ::System::Boolean fixOutOfBoundsUVs)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::DRect, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MATANDTRANSFORMTOMERGED__CTOR_OFFSET))(this, obUVrect, fixOutOfBoundsUVs);
		}

		::System::Void _ctor_1(::DigitalOpus::MB::Core::DRect obUVrect, ::System::Boolean fixOutOfBoundsUVs, ::UnityEngine::Material* m)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::DRect, ::System::Boolean, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MATANDTRANSFORMTOMERGED__CTOR_1_OFFSET))(this, obUVrect, fixOutOfBoundsUVs, m);
		}

		::DigitalOpus::MB::Core::DRect get_obUVRectIfTilingSame()
		{
			return ((::DigitalOpus::MB::Core::DRect(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MATANDTRANSFORMTOMERGED_GET_OBUVRECTIFTILINGSAME_OFFSET))(this);
		}

		::System::Void set_obUVRectIfTilingSame(::DigitalOpus::MB::Core::DRect value)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::DRect))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MATANDTRANSFORMTOMERGED_SET_OBUVRECTIFTILINGSAME_OFFSET))(this, value);
		}

		::DigitalOpus::MB::Core::DRect get_samplingRectMatAndUVTiling()
		{
			return ((::DigitalOpus::MB::Core::DRect(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MATANDTRANSFORMTOMERGED_GET_SAMPLINGRECTMATANDUVTILING_OFFSET))(this);
		}

		::System::Void set_samplingRectMatAndUVTiling(::DigitalOpus::MB::Core::DRect value)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::DRect))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MATANDTRANSFORMTOMERGED_SET_SAMPLINGRECTMATANDUVTILING_OFFSET))(this, value);
		}

		::DigitalOpus::MB::Core::DRect get_materialTiling()
		{
			return ((::DigitalOpus::MB::Core::DRect(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MATANDTRANSFORMTOMERGED_GET_MATERIALTILING_OFFSET))(this);
		}

		::System::Void set_materialTiling(::DigitalOpus::MB::Core::DRect value)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::DRect))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MATANDTRANSFORMTOMERGED_SET_MATERIALTILING_OFFSET))(this, value);
		}

		::System::Void _init(::DigitalOpus::MB::Core::DRect obUVrect, ::System::Boolean fixOutOfBoundsUVs, ::UnityEngine::Material* m)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::DRect, ::System::Boolean, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MATANDTRANSFORMTOMERGED__INIT_OFFSET))(this, obUVrect, fixOutOfBoundsUVs, m);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MATANDTRANSFORMTOMERGED_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MATANDTRANSFORMTOMERGED_GETHASHCODE_OFFSET))(this);
		}

		::System::String* GetMaterialName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MATANDTRANSFORMTOMERGED_GETMATERIALNAME_OFFSET))(this);
		}

		::System::Void AssignInitialValuesForMaterialTilingAndSamplingRectMatAndUVTiling(::System::Boolean allTexturesUseSameMatTiling, ::DigitalOpus::MB::Core::DRect matTiling)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::DigitalOpus::MB::Core::DRect))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MATANDTRANSFORMTOMERGED_ASSIGNINITIALVALUESFORMATERIALTILINGANDSAMPLINGRECTMATANDUVTILING_OFFSET))(this, allTexturesUseSameMatTiling, matTiling);
		}
	};
}
