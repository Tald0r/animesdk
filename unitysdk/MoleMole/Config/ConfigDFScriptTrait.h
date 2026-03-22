#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_134;
class Class_1_236FD73ABC492E3F;
class Class_1_9BBA877A0A83A422;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x84A5420)
#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x84A4F90)
#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_1A0B790695E07CE5_OFFSET UNITYSDK_OFFSET(0x84A5480)
#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x84A4B80)
#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x84A5CF0)
#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_4A60A8B6915A15CE_OFFSET UNITYSDK_OFFSET(0x84A5B40)
#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_592A429496BD5F4C_OFFSET UNITYSDK_OFFSET(0x84A5970)
#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x84A4B10)
#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x84A4C80)
#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_B9BDB4313A1FAFEC_OFFSET UNITYSDK_OFFSET(0x84A4DB0)
#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x84A5AD0)
#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x84A5010)
#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_F2991A902CA63635_OFFSET UNITYSDK_OFFSET(0x84A5690)
#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x84A5960)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDFScriptTrait_TypeDefinitionIndex = 36569;

	class ConfigDFScriptTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* DFScriptName; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* InitParam; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_B9BDB4313A1FAFEC(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_B9BDB4313A1FAFEC_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_F2991A902CA63635(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_F2991A902CA63635_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigDFScriptTrait* Method_2_592A429496BD5F4C(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigDFScriptTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_592A429496BD5F4C_OFFSET))(a1);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigDFScriptTrait* Method_2_4A60A8B6915A15CE(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigDFScriptTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_4A60A8B6915A15CE_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_1A0B790695E07CE5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_1A0B790695E07CE5_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_DF413489329CBAF8_OFFSET))(this, a1);
		}
	};
}
