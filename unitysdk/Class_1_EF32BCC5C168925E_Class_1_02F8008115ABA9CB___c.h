#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class IScenePerformConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_EF32BCC5C168925E_CLASS_1_02F8008115ABA9CB___C_METHOD_1_7A145CA508674CDE_1_OFFSET UNITYSDK_OFFSET(0xBD093F0)
#define CLASS_1_EF32BCC5C168925E_CLASS_1_02F8008115ABA9CB___C_METHOD_1_7A145CA508674CDE_OFFSET UNITYSDK_OFFSET(0xBD09330)
#define CLASS_1_EF32BCC5C168925E_CLASS_1_02F8008115ABA9CB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBD092E0)
#define CLASS_1_EF32BCC5C168925E_CLASS_1_02F8008115ABA9CB___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBD09320)

inline static constexpr unsigned int Class_1_EF32BCC5C168925E_Class_1_02F8008115ABA9CB___c_TypeDefinitionIndex = 60387;

class Class_1_EF32BCC5C168925E_Class_1_02F8008115ABA9CB___c : public ::System::Object
{
public:
	static ::System::Func_2<::MoleMole::Config::IScenePerformConfig*, ::System::Boolean>** StaticGet___9__67_1()
	{
		return (::System::Func_2<::MoleMole::Config::IScenePerformConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF32BCC5C168925E_Class_1_02F8008115ABA9CB___c_TypeDefinitionIndex)->GetStaticField(0x37F60);
	}
	static ::System::Func_2<::MoleMole::Config::IScenePerformConfig*, ::System::Boolean>** StaticGet___9__67_0()
	{
		return (::System::Func_2<::MoleMole::Config::IScenePerformConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF32BCC5C168925E_Class_1_02F8008115ABA9CB___c_TypeDefinitionIndex)->GetStaticField(0x37F68);
	}
	static ::Class_1_EF32BCC5C168925E_Class_1_02F8008115ABA9CB___c** StaticGet___9()
	{
		return (::Class_1_EF32BCC5C168925E_Class_1_02F8008115ABA9CB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF32BCC5C168925E_Class_1_02F8008115ABA9CB___c_TypeDefinitionIndex)->GetStaticField(0x37F70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EF32BCC5C168925E_CLASS_1_02F8008115ABA9CB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF32BCC5C168925E_CLASS_1_02F8008115ABA9CB___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_7A145CA508674CDE(::MoleMole::Config::IScenePerformConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::IScenePerformConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EF32BCC5C168925E_CLASS_1_02F8008115ABA9CB___C_METHOD_1_7A145CA508674CDE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7A145CA508674CDE_1(::MoleMole::Config::IScenePerformConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::IScenePerformConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EF32BCC5C168925E_CLASS_1_02F8008115ABA9CB___C_METHOD_1_7A145CA508674CDE_1_OFFSET))(this, a1);
	}
};
