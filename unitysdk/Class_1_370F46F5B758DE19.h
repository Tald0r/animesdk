#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_370F46F5B758DE19_METHOD_1_6EE7FC95AC68752A_OFFSET UNITYSDK_OFFSET(0x890EBD0)
#define CLASS_1_370F46F5B758DE19_METHOD_1_958E77D3D32E4233_OFFSET UNITYSDK_OFFSET(0x890EC60)
#define CLASS_1_370F46F5B758DE19_METHOD_1_B34C1EF5D195AA30_OFFSET UNITYSDK_OFFSET(0x890ED30)
#define CLASS_1_370F46F5B758DE19_METHOD_1_D20BF56E36607D54_1_OFFSET UNITYSDK_OFFSET(0x890EB50)
#define CLASS_1_370F46F5B758DE19_METHOD_1_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x890EAD0)
#define CLASS_1_370F46F5B758DE19_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x890EDA0)
#define CLASS_1_370F46F5B758DE19__CTOR_OFFSET UNITYSDK_OFFSET(0x890EAC0)

inline static constexpr unsigned int Class_1_370F46F5B758DE19_TypeDefinitionIndex = 50417;

class Class_1_370F46F5B758DE19 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_370F46F5B758DE19__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_370F46F5B758DE19_METHOD_1_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::System::Void Method_1_6EE7FC95AC68752A(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_370F46F5B758DE19_METHOD_1_6EE7FC95AC68752A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D20BF56E36607D54_1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_370F46F5B758DE19_METHOD_1_D20BF56E36607D54_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_958E77D3D32E4233(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_370F46F5B758DE19_METHOD_1_958E77D3D32E4233_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_B34C1EF5D195AA30(::Class_1_370F46F5B758DE19* a1)
	{
		return ((::System::Boolean(*)(::Class_1_370F46F5B758DE19*))((::PBYTE)hIl2Cpp + CLASS_1_370F46F5B758DE19_METHOD_1_B34C1EF5D195AA30_OFFSET))(a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_370F46F5B758DE19_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
