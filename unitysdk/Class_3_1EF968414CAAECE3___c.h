#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E29E10A308ABE38D;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_1EF968414CAAECE3___C_METHOD_1_F8CABA453114AB38_OFFSET UNITYSDK_OFFSET(0x642FD50)
#define CLASS_3_1EF968414CAAECE3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x642FD00)
#define CLASS_3_1EF968414CAAECE3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x642FD40)

inline static constexpr unsigned int Class_3_1EF968414CAAECE3___c_TypeDefinitionIndex = 66444;

class Class_3_1EF968414CAAECE3___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_E29E10A308ABE38D*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_E29E10A308ABE38D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1EF968414CAAECE3___c_TypeDefinitionIndex)->GetStaticField(0x37C70);
	}
	static ::Class_3_1EF968414CAAECE3___c** StaticGet___9()
	{
		return (::Class_3_1EF968414CAAECE3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1EF968414CAAECE3___c_TypeDefinitionIndex)->GetStaticField(0x37C78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F8CABA453114AB38(::Class_3_E29E10A308ABE38D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E29E10A308ABE38D*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3___C_METHOD_1_F8CABA453114AB38_OFFSET))(this, a1);
	}
};
