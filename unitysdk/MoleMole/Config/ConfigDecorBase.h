#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGDECORBASE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10A8CF50)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10A8CD10)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x10A8CD90)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_17C19F1FFDE0D888_OFFSET UNITYSDK_OFFSET(0x10A8D300)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_81438D3AF9EEE8D8_OFFSET UNITYSDK_OFFSET(0x10A8CAE0)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_939448457A24CB1A_OFFSET UNITYSDK_OFFSET(0x10A8D1B0)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x10A8CAD0)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_A42B0141BE94FABE_OFFSET UNITYSDK_OFFSET(0x10A8CFB0)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x10A8CBE0)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x10A8D1A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDecorBase_TypeDefinitionIndex = 60379;

	class ConfigDecorBase : public ::System::Object
	{
	public:
		::System::Boolean Export2Server; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigDecorBase* Method_1_81438D3AF9EEE8D8()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_81438D3AF9EEE8D8_OFFSET))(this);
		}

		::System::Int32 Method_1_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_0BD393E566CD3D4A_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_A42B0141BE94FABE(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_A42B0141BE94FABE_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ConfigDecorBase* Method_1_939448457A24CB1A(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_939448457A24CB1A_OFFSET))(a1, a2);
		}

		static ::MoleMole::Config::ConfigDecorBase* Method_1_17C19F1FFDE0D888(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_17C19F1FFDE0D888_OFFSET))(a1);
		}
	};
}
