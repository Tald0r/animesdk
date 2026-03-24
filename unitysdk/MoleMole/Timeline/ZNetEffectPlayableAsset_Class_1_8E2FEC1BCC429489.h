#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class RenderMaterial; }
namespace MoleMole::EffectSimulate { class ESAvatarMatChange_RendererPartInfo; }

#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_CLASS_1_8E2FEC1BCC429489_METHOD_1_196F7F326D595BBA_OFFSET UNITYSDK_OFFSET(0x8CA9C60)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_CLASS_1_8E2FEC1BCC429489__CTOR_OFFSET UNITYSDK_OFFSET(0x8CA9C50)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ZNetEffectPlayableAsset_Class_1_8E2FEC1BCC429489_TypeDefinitionIndex = 49171;

	class ZNetEffectPlayableAsset_Class_1_8E2FEC1BCC429489 : public ::System::Object
	{
	public:
		::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_CLASS_1_8E2FEC1BCC429489__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_196F7F326D595BBA(::MoleMole::Config::RenderMaterial* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::RenderMaterial*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_CLASS_1_8E2FEC1BCC429489_METHOD_1_196F7F326D595BBA_OFFSET))(this, a1);
		}
	};
}
