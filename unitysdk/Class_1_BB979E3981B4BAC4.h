#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::EffectSimulate { class NapEffectSimulatorComponent; }
namespace MoleMole::EffectSimulate { class NapEffectSimulatorMgr; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BB979E3981B4BAC4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x941CF60)
#define CLASS_1_BB979E3981B4BAC4_METHOD_1_2265DEE0C857E29E_OFFSET UNITYSDK_OFFSET(0x6F72980)
#define CLASS_1_BB979E3981B4BAC4_METHOD_1_3306F24AC967FE79_OFFSET UNITYSDK_OFFSET(0x6F72CE0)
#define CLASS_1_BB979E3981B4BAC4_METHOD_1_3B86CF5A1A661FA8_1_OFFSET UNITYSDK_OFFSET(0x6F730C0)
#define CLASS_1_BB979E3981B4BAC4_METHOD_1_3B86CF5A1A661FA8_OFFSET UNITYSDK_OFFSET(0x6F73060)
#define CLASS_1_BB979E3981B4BAC4_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x6F72C70)
#define CLASS_1_BB979E3981B4BAC4_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x941D150)
#define CLASS_1_BB979E3981B4BAC4_METHOD_1_9F915A1A071F04A7_OFFSET UNITYSDK_OFFSET(0x6F73120)
#define CLASS_1_BB979E3981B4BAC4__CTOR_OFFSET UNITYSDK_OFFSET(0x941CFC0)

inline static constexpr unsigned int Class_1_BB979E3981B4BAC4_TypeDefinitionIndex = 75275;

class Class_1_BB979E3981B4BAC4 : public ::System::Object
{
public:
	static ::Class_1_BB979E3981B4BAC4** StaticGet_Field_1_1()
	{
		return (::Class_1_BB979E3981B4BAC4**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB979E3981B4BAC4_TypeDefinitionIndex)->GetStaticField(0x3A010);
	}
	::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* Field_1_3; // 0x18
	::System::Collections::Generic::HashSet_1<::MoleMole::EffectSimulate::NapEffectSimulatorMgr*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB979E3981B4BAC4__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB979E3981B4BAC4_DISPOSE_OFFSET))(this);
	}

	static ::Class_1_BB979E3981B4BAC4* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_BB979E3981B4BAC4*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB979E3981B4BAC4_METHOD_1_9B39F7D7C1FF70D6_OFFSET))();
	}

	::System::Void Method_1_2265DEE0C857E29E(::MoleMole::EffectSimulate::NapEffectSimulatorMgr* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::NapEffectSimulatorMgr*))((::PBYTE)hIl2Cpp + CLASS_1_BB979E3981B4BAC4_METHOD_1_2265DEE0C857E29E_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB979E3981B4BAC4_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_3306F24AC967FE79()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB979E3981B4BAC4_METHOD_1_3306F24AC967FE79_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* Method_1_3B86CF5A1A661FA8()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB979E3981B4BAC4_METHOD_1_3B86CF5A1A661FA8_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* Method_1_3B86CF5A1A661FA8_1()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB979E3981B4BAC4_METHOD_1_3B86CF5A1A661FA8_1_OFFSET))(this);
	}

	::System::Void Method_1_9F915A1A071F04A7(::MoleMole::EffectSimulate::NapEffectSimulatorMgr* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::NapEffectSimulatorMgr*))((::PBYTE)hIl2Cpp + CLASS_1_BB979E3981B4BAC4_METHOD_1_9F915A1A071F04A7_OFFSET))(this, a1);
	}
};
