#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_07DBFDAAE3D530EE___C_METHOD_1_46778EB0EE8D9609_OFFSET UNITYSDK_OFFSET(0x7362E40)
#define CLASS_2_07DBFDAAE3D530EE___C_METHOD_1_7FE3EA8542ED97C3_OFFSET UNITYSDK_OFFSET(0x7362E00)
#define CLASS_2_07DBFDAAE3D530EE___C_METHOD_1_84287931B1F63150_OFFSET UNITYSDK_OFFSET(0x7362C60)
#define CLASS_2_07DBFDAAE3D530EE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7362C10)
#define CLASS_2_07DBFDAAE3D530EE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7362C50)

inline static constexpr unsigned int Class_2_07DBFDAAE3D530EE___c_TypeDefinitionIndex = 48058;

class Class_2_07DBFDAAE3D530EE___c : public ::System::Object
{
public:
	static ::Class_2_07DBFDAAE3D530EE___c** StaticGet___9()
	{
		return (::Class_2_07DBFDAAE3D530EE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_07DBFDAAE3D530EE___c_TypeDefinitionIndex)->GetStaticField(0x39600);
	}
	static ::System::Action_1<::System::Int32>** StaticGet___9__25_13()
	{
		return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_07DBFDAAE3D530EE___c_TypeDefinitionIndex)->GetStaticField(0x39608);
	}
	static ::System::Func_1<::System::DateTime>** StaticGet___9__25_4()
	{
		return (::System::Func_1<::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_07DBFDAAE3D530EE___c_TypeDefinitionIndex)->GetStaticField(0x39610);
	}
	static ::System::Func_1<::MoleMole::UIControllerContextBase*>** StaticGet___9__25_11()
	{
		return (::System::Func_1<::MoleMole::UIControllerContextBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_07DBFDAAE3D530EE___c_TypeDefinitionIndex)->GetStaticField(0x39618);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_07DBFDAAE3D530EE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07DBFDAAE3D530EE___C__CTOR_OFFSET))(this);
	}

	::System::DateTime Method_1_84287931B1F63150()
	{
		return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07DBFDAAE3D530EE___C_METHOD_1_84287931B1F63150_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* Method_1_7FE3EA8542ED97C3()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07DBFDAAE3D530EE___C_METHOD_1_7FE3EA8542ED97C3_OFFSET))(this);
	}

	::System::Void Method_1_46778EB0EE8D9609(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_07DBFDAAE3D530EE___C_METHOD_1_46778EB0EE8D9609_OFFSET))(this, a1);
	}
};
