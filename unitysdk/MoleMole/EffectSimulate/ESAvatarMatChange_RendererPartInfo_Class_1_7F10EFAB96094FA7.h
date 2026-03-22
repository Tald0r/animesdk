#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::EffectSimulate { class ESAvatarMatChange_RendererPartInfo_Item; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_CLASS_1_7F10EFAB96094FA7_METHOD_1_B81AD4F0E4EC68A1_OFFSET UNITYSDK_OFFSET(0x16BC4830)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_CLASS_1_7F10EFAB96094FA7__CTOR_OFFSET UNITYSDK_OFFSET(0x16BC4820)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarMatChange_RendererPartInfo_Class_1_7F10EFAB96094FA7_TypeDefinitionIndex = 54446;

	class ESAvatarMatChange_RendererPartInfo_Class_1_7F10EFAB96094FA7 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_CLASS_1_7F10EFAB96094FA7__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_B81AD4F0E4EC68A1(::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo_Item* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo_Item*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_CLASS_1_7F10EFAB96094FA7_METHOD_1_B81AD4F0E4EC68A1_OFFSET))(this, a1);
		}
	};
}
