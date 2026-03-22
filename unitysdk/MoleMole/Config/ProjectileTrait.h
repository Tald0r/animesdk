#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/Config/ProjectileTraitConfig.h"

class Class_0_16E4307DCC419505_134;
class Class_1_236FD73ABC492E3F;
class Class_1_9BBA877A0A83A422;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_PROJECTILETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xC1DFF10)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xC1DFC00)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_1B38DDAB1EBE93B0_OFFSET UNITYSDK_OFFSET(0xC1E0110)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xC1DF7F0)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xC1E0450)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_42E1B0366D8D72CF_OFFSET UNITYSDK_OFFSET(0xC1DFF70)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0xC1DFC80)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_966E155D688EF664_OFFSET UNITYSDK_OFFSET(0xC1E04C0)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xC1DF8F0)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0xC1DF7A0)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_B9BDB4313A1FAFEC_OFFSET UNITYSDK_OFFSET(0xC1DFA20)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xC1E03E0)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_FBDD7EC9A66B5FEA_OFFSET UNITYSDK_OFFSET(0xC1E0230)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xC1E0220)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ProjectileTrait_TypeDefinitionIndex = 41456;

	class ProjectileTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ProjectileTraitConfig>* config; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_B9BDB4313A1FAFEC(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_B9BDB4313A1FAFEC_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_1B38DDAB1EBE93B0(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_1B38DDAB1EBE93B0_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ProjectileTrait* Method_2_FBDD7EC9A66B5FEA(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ProjectileTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_FBDD7EC9A66B5FEA_OFFSET))(a1, a2);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ProjectileTrait* Method_2_966E155D688EF664(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ProjectileTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_966E155D688EF664_OFFSET))(a1);
		}

		::System::Boolean Method_2_42E1B0366D8D72CF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_42E1B0366D8D72CF_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_5B0202969299569F(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_5B0202969299569F_OFFSET))(this, a1);
		}
	};
}
