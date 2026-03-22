#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_236FD73ABC492E3F;
class Class_1_9BBA877A0A83A422;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x629F070)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x629EE30)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x629EEB0)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x629EC00)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x629F690)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_METHOD_2_39C75ED00C6629F7_OFFSET UNITYSDK_OFFSET(0x629F2C0)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x629EBF0)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_METHOD_2_A42B0141BE94FABE_OFFSET UNITYSDK_OFFSET(0x629F0D0)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_METHOD_2_AD2546178B84DCBA_OFFSET UNITYSDK_OFFSET(0x629F700)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_METHOD_2_B4CE6E15972D3848_OFFSET UNITYSDK_OFFSET(0x629F530)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x629ED00)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x629F3F0)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x629F520)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AIPathPointTrait_TypeDefinitionIndex = 66781;

	class AIPathPointTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Boolean IsSlideAILevel; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_39C75ED00C6629F7(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_METHOD_2_39C75ED00C6629F7_OFFSET))(this, a1);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_ONPOSTENTITYREADY_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::AIPathPointTrait* Method_2_B4CE6E15972D3848(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::AIPathPointTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_METHOD_2_B4CE6E15972D3848_OFFSET))(a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::AIPathPointTrait* Method_2_AD2546178B84DCBA(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::AIPathPointTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_METHOD_2_AD2546178B84DCBA_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_A42B0141BE94FABE(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_METHOD_2_A42B0141BE94FABE_OFFSET))(this, a1, a2);
		}
	};
}
