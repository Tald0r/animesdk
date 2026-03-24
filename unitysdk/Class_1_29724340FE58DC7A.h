#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_425;
class Class_3_F33F9DC5F4112336;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_29724340FE58DC7A_METHOD_1_131A40A79B5DB8E6_OFFSET UNITYSDK_OFFSET(0x8E329E0)
#define CLASS_1_29724340FE58DC7A_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x8E32E50)
#define CLASS_1_29724340FE58DC7A_METHOD_1_6663A16DB2122E9E_OFFSET UNITYSDK_OFFSET(0x8E32CB0)
#define CLASS_1_29724340FE58DC7A_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x8E32E40)
#define CLASS_1_29724340FE58DC7A_METHOD_1_F63281714DD4869C_OFFSET UNITYSDK_OFFSET(0x8E32F30)
#define CLASS_1_29724340FE58DC7A__CTOR_OFFSET UNITYSDK_OFFSET(0x8E329D0)

inline static constexpr unsigned int Class_1_29724340FE58DC7A_TypeDefinitionIndex = 64137;

class Class_1_29724340FE58DC7A : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_1_3; // 0x18
	::System::Int32 Field_1_0; // 0x20
	::System::Int32 Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29724340FE58DC7A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_131A40A79B5DB8E6(::System::Int32 a1, ::Class_2_208CC9941471731A_425* a2, ::Class_3_F33F9DC5F4112336* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_208CC9941471731A_425*, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + CLASS_1_29724340FE58DC7A_METHOD_1_131A40A79B5DB8E6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6663A16DB2122E9E(::Class_3_F33F9DC5F4112336* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + CLASS_1_29724340FE58DC7A_METHOD_1_6663A16DB2122E9E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29724340FE58DC7A_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29724340FE58DC7A_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_F63281714DD4869C(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_29724340FE58DC7A_METHOD_1_F63281714DD4869C_OFFSET))(this, a1, a2);
	}
};
