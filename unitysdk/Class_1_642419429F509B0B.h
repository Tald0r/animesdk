#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_417;
class Class_0_16E4307DCC419505_418;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define CLASS_1_642419429F509B0B_METHOD_1_0DA2FC17B2029CB3_OFFSET UNITYSDK_OFFSET(0xD481E80)
#define CLASS_1_642419429F509B0B_METHOD_1_4EB141F196301833_OFFSET UNITYSDK_OFFSET(0xD481D70)
#define CLASS_1_642419429F509B0B_METHOD_1_4FF52A67DA7128F8_OFFSET UNITYSDK_OFFSET(0x8AC2410)
#define CLASS_1_642419429F509B0B_METHOD_1_55B67978FC895086_OFFSET UNITYSDK_OFFSET(0x8AC2670)
#define CLASS_1_642419429F509B0B_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x8AC2AF0)
#define CLASS_1_642419429F509B0B_METHOD_1_D8ACA568D1D1A8FC_OFFSET UNITYSDK_OFFSET(0x8AC2310)
#define CLASS_1_642419429F509B0B_METHOD_1_E66ECF116ED8527B_OFFSET UNITYSDK_OFFSET(0x8AC2940)
#define CLASS_1_642419429F509B0B_METHOD_1_F5FA400DB67E9A9B_OFFSET UNITYSDK_OFFSET(0x8AC2820)
#define CLASS_1_642419429F509B0B__CTOR_OFFSET UNITYSDK_OFFSET(0x8AC2300)

inline static constexpr unsigned int Class_1_642419429F509B0B_TypeDefinitionIndex = 48261;

class Class_1_642419429F509B0B : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_417* Field_1_1; // 0x10
	::Class_0_16E4307DCC419505_418* Field_1_0; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_418* a1, ::Class_0_16E4307DCC419505_417* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_418*, ::Class_0_16E4307DCC419505_417*))((::PBYTE)hIl2Cpp + CLASS_1_642419429F509B0B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::System::String*>*>* Method_1_D8ACA568D1D1A8FC()
	{
		return ((::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::System::String*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_642419429F509B0B_METHOD_1_D8ACA568D1D1A8FC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_4FF52A67DA7128F8()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_642419429F509B0B_METHOD_1_4FF52A67DA7128F8_OFFSET))(this);
	}

	::System::Threading::Tasks::Task* Method_1_55B67978FC895086(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
	{
		return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_642419429F509B0B_METHOD_1_55B67978FC895086_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5FA400DB67E9A9B(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_642419429F509B0B_METHOD_1_F5FA400DB67E9A9B_OFFSET))(this, a1);
	}

	::System::Threading::Tasks::Task* Method_1_E66ECF116ED8527B(::System::String* a1)
	{
		return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_642419429F509B0B_METHOD_1_E66ECF116ED8527B_OFFSET))(this, a1);
	}

	::System::Void Method_1_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_642419429F509B0B_METHOD_1_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::System::Threading::Tasks::Task_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* Method_1_4EB141F196301833(::System::Collections::Generic::HashSet_1<::System::String*>* a1)
	{
		return ((::System::Threading::Tasks::Task_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_642419429F509B0B_METHOD_1_4EB141F196301833_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Method_1_0DA2FC17B2029CB3(::System::Collections::Generic::HashSet_1<::System::String*>* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_642419429F509B0B_METHOD_1_0DA2FC17B2029CB3_OFFSET))(this, a1);
	}
};
