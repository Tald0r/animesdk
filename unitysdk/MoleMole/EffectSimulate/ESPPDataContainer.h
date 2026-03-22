#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::EffectSimulate::PostProcess { class ExportContextBase; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }

#define MOLEMOLE_EFFECTSIMULATE_ESPPDATACONTAINER_LOADTEMPFROMASSET_OFFSET UNITYSDK_OFFSET(0xC985BF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPPDATACONTAINER_METHOD_5_16F329E8131CBCB7_OFFSET UNITYSDK_OFFSET(0xC986130)
#define MOLEMOLE_EFFECTSIMULATE_ESPPDATACONTAINER_METHOD_5_D98FEEA46D5D3B4F_OFFSET UNITYSDK_OFFSET(0xC986030)
#define MOLEMOLE_EFFECTSIMULATE_ESPPDATACONTAINER_TRYEXPORT_OFFSET UNITYSDK_OFFSET(0xC985B20)
#define MOLEMOLE_EFFECTSIMULATE_ESPPDATACONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0xC986010)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPPDataContainer_TypeDefinitionIndex = 52911;

	class ESPPDataContainer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::EffectSimulate::PostProcess::ExportContextBase* exportCtx; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPPDATACONTAINER__CTOR_OFFSET))(this);
		}

		::System::Boolean TryExport(::System::String*& a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPPDATACONTAINER_TRYEXPORT_OFFSET))(this, a1, a2);
		}

		::System::Boolean LoadTempFromAsset(::System::String*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPPDATACONTAINER_LOADTEMPFROMASSET_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::MoleMole::EffectSimulate::PostProcess::ExportContextBase*>* Method_5_D98FEEA46D5D3B4F()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::MoleMole::EffectSimulate::PostProcess::ExportContextBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPPDATACONTAINER_METHOD_5_D98FEEA46D5D3B4F_OFFSET))(this);
		}

		::System::Boolean Method_5_16F329E8131CBCB7()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPPDATACONTAINER_METHOD_5_16F329E8131CBCB7_OFFSET))(this);
		}
	};
}
