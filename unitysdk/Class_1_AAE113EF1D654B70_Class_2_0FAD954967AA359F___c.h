#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C0D5B1A036ED00F0;
namespace MoleMole::LevelPerform { class DirectKillShakeSetting; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define CLASS_1_AAE113EF1D654B70_CLASS_2_0FAD954967AA359F___C_METHOD_1_A04F5D0CAF436589_OFFSET UNITYSDK_OFFSET(0x92F3710)
#define CLASS_1_AAE113EF1D654B70_CLASS_2_0FAD954967AA359F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x92F36C0)
#define CLASS_1_AAE113EF1D654B70_CLASS_2_0FAD954967AA359F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x92F3700)

inline static constexpr unsigned int Class_1_AAE113EF1D654B70_Class_2_0FAD954967AA359F___c_TypeDefinitionIndex = 70984;

class Class_1_AAE113EF1D654B70_Class_2_0FAD954967AA359F___c : public ::System::Object
{
public:
	static ::Class_1_AAE113EF1D654B70_Class_2_0FAD954967AA359F___c** StaticGet___9()
	{
		return (::Class_1_AAE113EF1D654B70_Class_2_0FAD954967AA359F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAE113EF1D654B70_Class_2_0FAD954967AA359F___c_TypeDefinitionIndex)->GetStaticField(0x39DC0);
	}
	static ::System::Func_3<::Class_3_C0D5B1A036ED00F0*, ::System::String*, ::MoleMole::LevelPerform::DirectKillShakeSetting*>** StaticGet___9__18_0()
	{
		return (::System::Func_3<::Class_3_C0D5B1A036ED00F0*, ::System::String*, ::MoleMole::LevelPerform::DirectKillShakeSetting*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAE113EF1D654B70_Class_2_0FAD954967AA359F___c_TypeDefinitionIndex)->GetStaticField(0x39DC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AAE113EF1D654B70_CLASS_2_0FAD954967AA359F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE113EF1D654B70_CLASS_2_0FAD954967AA359F___C__CTOR_OFFSET))(this);
	}

	::MoleMole::LevelPerform::DirectKillShakeSetting* Method_1_A04F5D0CAF436589(::Class_3_C0D5B1A036ED00F0* a1, ::System::String* a2)
	{
		return ((::MoleMole::LevelPerform::DirectKillShakeSetting*(*)(::PVOID, ::Class_3_C0D5B1A036ED00F0*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AAE113EF1D654B70_CLASS_2_0FAD954967AA359F___C_METHOD_1_A04F5D0CAF436589_OFFSET))(this, a1, a2);
	}
};
