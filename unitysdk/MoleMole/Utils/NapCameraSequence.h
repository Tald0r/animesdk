#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2BD1943B012482C0.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceCollection_5.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace MoleMole::Utils { class NapCameraSequenceDataTable; }
namespace PipelineCamera::CameraSequence { class CoreDataCollectionAdditiveTrack; }
namespace PipelineCamera::CameraSequence { class CoreDataCollectionSegment; }
namespace PipelineCamera::CameraSequence { class CoreDataCollectionTrack; }
namespace PipelineCamera::CameraSequence { class CoreDataComposite; }
namespace System { class Type; }

#define MOLEMOLE_UTILS_NAPCAMERASEQUENCE_GETCONTEXTTYPE_OFFSET UNITYSDK_OFFSET(0x954D120)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x954D360)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x954D410)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x954D3D0)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCE___BASE_GETCONTEXTTYPE_OFFSET UNITYSDK_OFFSET(0x954D4A0)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCE___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x954D4B0)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int NapCameraSequence_TypeDefinitionIndex = 58562;

	class NapCameraSequence : public ::PipelineCamera::CameraSequence::CameraSequenceCollection_5<::PipelineCamera::CameraSequence::CoreDataComposite*, ::PipelineCamera::CameraSequence::CoreDataCollectionSegment*, ::PipelineCamera::CameraSequence::CoreDataCollectionTrack*, ::PipelineCamera::CameraSequence::CoreDataCollectionAdditiveTrack*, ::PipelineCamera::WorldBasicCameraData>
	{
	public:
		static ::System::Type** StaticGet_ContextType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(NapCameraSequence_TypeDefinitionIndex)->GetStaticField(0x40980);
		}
		static ::Il2CppArray<::System::Type*>** StaticGet__typeArgs()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(NapCameraSequence_TypeDefinitionIndex)->GetStaticField(0x40988);
		}
		static ::System::Type** StaticGet_GenericContextType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(NapCameraSequence_TypeDefinitionIndex)->GetStaticField(0x40990);
		}
		::Enum_3_2BD1943B012482C0 slotToPlay; // 0xA8
		::MoleMole::Utils::NapCameraSequenceDataTable* configTable; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCE__CCTOR_OFFSET))();
		}

		::System::Type* GetContextType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCE_GETCONTEXTTYPE_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCE_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Type* __base_GetContextType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCE___BASE_GETCONTEXTTYPE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCE___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
