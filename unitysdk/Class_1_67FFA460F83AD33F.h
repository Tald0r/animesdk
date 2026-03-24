#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4ED21A115C97704D;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class String; }

#define CLASS_1_67FFA460F83AD33F_METHOD_1_28F2941B86E04AA6_OFFSET UNITYSDK_OFFSET(0xBC720F0)
#define CLASS_1_67FFA460F83AD33F_METHOD_1_2F68A7DFEED1FE13_OFFSET UNITYSDK_OFFSET(0xBC72020)
#define CLASS_1_67FFA460F83AD33F_METHOD_1_D6D26A1FC193F2ED_OFFSET UNITYSDK_OFFSET(0xBC722B0)
#define CLASS_1_67FFA460F83AD33F_METHOD_1_FA1393B359A9F162_OFFSET UNITYSDK_OFFSET(0xBC721C0)

inline static constexpr unsigned int Class_1_67FFA460F83AD33F_TypeDefinitionIndex = 52779;

class Class_1_67FFA460F83AD33F : public ::System::Object
{
public:
	static ::MoleMole::Config::DynamicFloat* Method_1_2F68A7DFEED1FE13(::MoleMole::Config::DynamicFloat* a1, ::System::Single a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::MoleMole::Config::DynamicFloat*(*)(::MoleMole::Config::DynamicFloat*, ::System::Single, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_67FFA460F83AD33F_METHOD_1_2F68A7DFEED1FE13_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::DynamicInt* Method_1_28F2941B86E04AA6(::MoleMole::Config::DynamicInt* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::MoleMole::Config::DynamicInt*(*)(::MoleMole::Config::DynamicInt*, ::System::Int32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_67FFA460F83AD33F_METHOD_1_28F2941B86E04AA6_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_4ED21A115C97704D* Method_1_FA1393B359A9F162(::Class_1_4ED21A115C97704D* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::Class_1_4ED21A115C97704D*(*)(::Class_1_4ED21A115C97704D*, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_67FFA460F83AD33F_METHOD_1_FA1393B359A9F162_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::DynamicString* Method_1_D6D26A1FC193F2ED(::MoleMole::Config::DynamicString* a1, ::System::String* a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::MoleMole::Config::DynamicString*(*)(::MoleMole::Config::DynamicString*, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_67FFA460F83AD33F_METHOD_1_D6D26A1FC193F2ED_OFFSET))(a1, a2, a3, a4);
	}
};
