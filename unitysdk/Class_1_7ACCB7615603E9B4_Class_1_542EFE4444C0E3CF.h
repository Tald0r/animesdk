#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Utils { class INapCameraSequenceDataTableEntry; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define CLASS_1_7ACCB7615603E9B4_CLASS_1_542EFE4444C0E3CF_METHOD_1_73C24450D1F1DFB6_OFFSET UNITYSDK_OFFSET(0xA0D7470)
#define CLASS_1_7ACCB7615603E9B4_CLASS_1_542EFE4444C0E3CF__CTOR_OFFSET UNITYSDK_OFFSET(0xA0D7460)

inline static constexpr unsigned int Class_1_7ACCB7615603E9B4_Class_1_542EFE4444C0E3CF_TypeDefinitionIndex = 47726;

class Class_1_7ACCB7615603E9B4_Class_1_542EFE4444C0E3CF : public ::System::Object
{
public:
	::MoleMole::Utils::INapCameraSequenceDataTableEntry* Field_1_1; // 0x10
	::MoleMole::Battle::Entity* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ACCB7615603E9B4_CLASS_1_542EFE4444C0E3CF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_73C24450D1F1DFB6(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + CLASS_1_7ACCB7615603E9B4_CLASS_1_542EFE4444C0E3CF_METHOD_1_73C24450D1F1DFB6_OFFSET))(this, a1);
	}
};
