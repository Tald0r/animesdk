#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2DAF815691F591CB;
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Sockets { class TcpClient; }
namespace System::Threading { class Thread; }

#define CLASS_1_BCBC342897BD7646_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xBB92610)
#define CLASS_1_BCBC342897BD7646_METHOD_1_39813C8CB90CB4E2_OFFSET UNITYSDK_OFFSET(0xBB92730)
#define CLASS_1_BCBC342897BD7646_METHOD_1_653D5DB2D5C019FD_OFFSET UNITYSDK_OFFSET(0xBB92B00)
#define CLASS_1_BCBC342897BD7646_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xBB92680)
#define CLASS_1_BCBC342897BD7646_METHOD_1_D4499A0147676A9C_OFFSET UNITYSDK_OFFSET(0xBB91F30)
#define CLASS_1_BCBC342897BD7646_METHOD_1_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0xBB92930)
#define CLASS_1_BCBC342897BD7646_METHOD_1_FA0119DD445A672F_OFFSET UNITYSDK_OFFSET(0xBB91D20)
#define CLASS_1_BCBC342897BD7646__CTOR_OFFSET UNITYSDK_OFFSET(0xBB91C90)

inline static constexpr unsigned int Class_1_BCBC342897BD7646_TypeDefinitionIndex = 53823;

class Class_1_BCBC342897BD7646 : public ::System::Object
{
public:
	::Il2CppArray<::System::Byte>* Field_1_3; // 0x10
	::System::String* Field_1_7; // 0x18
	::System::Threading::Thread* Field_1_1; // 0x20
	::System::Collections::Concurrent::ConcurrentQueue_1<::Class_1_2DAF815691F591CB*>* Field_1_2; // 0x28
	::Il2CppArray<::System::Byte>* Field_1_4; // 0x30
	::System::Net::Sockets::TcpClient* Field_1_0; // 0x38
	::System::Int32 Field_1_5; // 0x40
	::System::Int32 Field_1_6; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCBC342897BD7646__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FA0119DD445A672F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCBC342897BD7646_METHOD_1_FA0119DD445A672F_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCBC342897BD7646_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCBC342897BD7646_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_D4499A0147676A9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCBC342897BD7646_METHOD_1_D4499A0147676A9C_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_2DAF815691F591CB*>* Method_1_39813C8CB90CB4E2()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_2DAF815691F591CB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCBC342897BD7646_METHOD_1_39813C8CB90CB4E2_OFFSET))(this);
	}

	::System::Void Method_1_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCBC342897BD7646_METHOD_1_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_1_653D5DB2D5C019FD(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BCBC342897BD7646_METHOD_1_653D5DB2D5C019FD_OFFSET))(this, a1);
	}
};
