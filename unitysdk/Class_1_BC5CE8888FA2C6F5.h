#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
template <typename T> class Class_0_16E4307DCC41950C_19;

#define CLASS_1_BC5CE8888FA2C6F5_METHOD_1_071EE05B9CE6122B_OFFSET UNITYSDK_OFFSET(0x69AAFE0)
#define CLASS_1_BC5CE8888FA2C6F5_METHOD_1_0860F812E446AE7C_OFFSET UNITYSDK_OFFSET(0x69AAD00)
#define CLASS_1_BC5CE8888FA2C6F5_METHOD_1_D030948C07D3A7CA_1_OFFSET UNITYSDK_OFFSET(0x69AB190)
#define CLASS_1_BC5CE8888FA2C6F5_METHOD_1_D030948C07D3A7CA_OFFSET UNITYSDK_OFFSET(0x69AAFA0)
#define CLASS_1_BC5CE8888FA2C6F5__CTOR_OFFSET UNITYSDK_OFFSET(0x69AACF0)

inline static constexpr unsigned int Class_1_BC5CE8888FA2C6F5_TypeDefinitionIndex = 61002;

class Class_1_BC5CE8888FA2C6F5 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC5CE8888FA2C6F5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0860F812E446AE7C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC5CE8888FA2C6F5_METHOD_1_0860F812E446AE7C_OFFSET))(this);
	}

	::Class_0_16E4307DCC41950C_19<::System::Boolean>* Method_1_D030948C07D3A7CA(::System::Boolean a1)
	{
		return ((::Class_0_16E4307DCC41950C_19<::System::Boolean>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC5CE8888FA2C6F5_METHOD_1_D030948C07D3A7CA_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC41950C_19<::System::Boolean>* Method_1_071EE05B9CE6122B(::System::Boolean a1, ::System::String* a2)
	{
		return ((::Class_0_16E4307DCC41950C_19<::System::Boolean>*(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BC5CE8888FA2C6F5_METHOD_1_071EE05B9CE6122B_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC41950C_19<::System::Boolean>* Method_1_D030948C07D3A7CA_1(::System::Boolean a1)
	{
		return ((::Class_0_16E4307DCC41950C_19<::System::Boolean>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC5CE8888FA2C6F5_METHOD_1_D030948C07D3A7CA_1_OFFSET))(this, a1);
	}
};
