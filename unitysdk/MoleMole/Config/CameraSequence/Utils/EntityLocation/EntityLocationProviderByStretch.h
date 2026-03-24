#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/Config/CameraSequence/Utils/EntityLocationPolicy.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0xF2C2F60)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_GETDATA_OFFSET UNITYSDK_OFFSET(0xF2C3120)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0xF2C3AD0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_17BD2B7D2D15CA8E_1_OFFSET UNITYSDK_OFFSET(0xF2C4410)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_17BD2B7D2D15CA8E_OFFSET UNITYSDK_OFFSET(0xF2C4170)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_256257DB669E870E_1_OFFSET UNITYSDK_OFFSET(0xF2C4090)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_256257DB669E870E_OFFSET UNITYSDK_OFFSET(0xF2C3FB0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_439B588EB4881570_OFFSET UNITYSDK_OFFSET(0xF2C3F40)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_5A60CCF7370A1875_OFFSET UNITYSDK_OFFSET(0xF2C3DA0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_8A5D6889494E1D04_OFFSET UNITYSDK_OFFSET(0xF2C3C70)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_C1397965C8E8E75A_1_OFFSET UNITYSDK_OFFSET(0xF2C4250)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_C1397965C8E8E75A_2_OFFSET UNITYSDK_OFFSET(0xF2C4330)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_C1397965C8E8E75A_OFFSET UNITYSDK_OFFSET(0xF2C3E60)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_SETPATH_OFFSET UNITYSDK_OFFSET(0xF2C2EA0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH__CCTOR_OFFSET UNITYSDK_OFFSET(0xF2C3B00)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH__CTOR_OFFSET UNITYSDK_OFFSET(0xF2C3AE0)

namespace MoleMole::Config::CameraSequence::Utils::EntityLocation
{
	inline static constexpr unsigned int EntityLocationProviderByStretch_TypeDefinitionIndex = 49395;

	class EntityLocationProviderByStretch : public ::MoleMole::Config::CameraSequence::Utils::EntityLocationPolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_offset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EntityLocationProviderByStretch_TypeDefinitionIndex)->GetStaticField(0xF380);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_mainPointHorizontal()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EntityLocationProviderByStretch_TypeDefinitionIndex)->GetStaticField(0xF388);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_fallbackVerticalRatio()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EntityLocationProviderByStretch_TypeDefinitionIndex)->GetStaticField(0xF390);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_mainPointVertical()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EntityLocationProviderByStretch_TypeDefinitionIndex)->GetStaticField(0xF398);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_attachPointsHorizontal()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EntityLocationProviderByStretch_TypeDefinitionIndex)->GetStaticField(0xF3A0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_stretchRatioHorizontal()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EntityLocationProviderByStretch_TypeDefinitionIndex)->GetStaticField(0xF3A8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_attachPointsVertical()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EntityLocationProviderByStretch_TypeDefinitionIndex)->GetStaticField(0xF3B0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_stretchRatioVertical()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EntityLocationProviderByStretch_TypeDefinitionIndex)->GetStaticField(0xF3B8);
		}
		::System::String* mainPointHorizontal; // 0x40
		::System::Collections::Generic::List_1<::System::String*>* attachPointsHorizontal; // 0x48
		::System::Single stretchRatioHorizontal; // 0x50
		::System::String* mainPointVertical; // 0x58
		::System::Collections::Generic::List_1<::System::String*>* attachPointsVertical; // 0x60
		::System::Single stretchRatioVertical; // 0x68
		::UnityEngine::Vector3 offset; // 0x6C
		::System::Single fallbackVerticalRatio; // 0x78
		::System::Boolean makeContextDependent; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_SETPATH_OFFSET))(this, a1);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_COLLECTVARIABLE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetData(::System::Single a1, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a2, ::System::UInt32 a3, ::Nap::NapECS::EcsWorld* a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::UInt32, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_GETDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_4_8A5D6889494E1D04(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_8A5D6889494E1D04_OFFSET))(this, a1);
		}

		::System::Void Method_4_5A60CCF7370A1875(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_5A60CCF7370A1875_OFFSET))(this, a1);
		}

		::System::Single Method_4_C1397965C8E8E75A(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_C1397965C8E8E75A_OFFSET))(this, a1);
		}

		::System::Void Method_4_439B588EB4881570(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_439B588EB4881570_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* Method_4_256257DB669E870E(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_256257DB669E870E_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* Method_4_256257DB669E870E_1(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_256257DB669E870E_1_OFFSET))(this, a1);
		}

		::System::String* Method_4_17BD2B7D2D15CA8E(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::String*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_17BD2B7D2D15CA8E_OFFSET))(this, a1);
		}

		::System::Single Method_4_C1397965C8E8E75A_1(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_C1397965C8E8E75A_1_OFFSET))(this, a1);
		}

		::System::Single Method_4_C1397965C8E8E75A_2(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_C1397965C8E8E75A_2_OFFSET))(this, a1);
		}

		::System::String* Method_4_17BD2B7D2D15CA8E_1(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::String*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATION_ENTITYLOCATIONPROVIDERBYSTRETCH_METHOD_4_17BD2B7D2D15CA8E_1_OFFSET))(this, a1);
		}
	};
}
