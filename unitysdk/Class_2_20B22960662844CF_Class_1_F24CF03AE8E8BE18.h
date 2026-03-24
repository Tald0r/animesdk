#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_81D34D116310A358;
class Class_2_20B22960662844CF;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_4109B64C3CE1B638;

#define CLASS_2_20B22960662844CF_CLASS_1_F24CF03AE8E8BE18_METHOD_1_232E79648899E21B_OFFSET UNITYSDK_OFFSET(0xE946130)
#define CLASS_2_20B22960662844CF_CLASS_1_F24CF03AE8E8BE18_METHOD_1_9B29AA706B0698A7_OFFSET UNITYSDK_OFFSET(0xE946190)
#define CLASS_2_20B22960662844CF_CLASS_1_F24CF03AE8E8BE18__CTOR_OFFSET UNITYSDK_OFFSET(0xE946120)

inline static constexpr unsigned int Class_2_20B22960662844CF_Class_1_F24CF03AE8E8BE18_TypeDefinitionIndex = 51004;

class Class_2_20B22960662844CF_Class_1_F24CF03AE8E8BE18 : public ::System::Object
{
public:
	::System::Action_1<::System::Collections::Generic::List_1<::Class_1_81D34D116310A358*>*>* Field_1_1; // 0x10
	::Class_2_20B22960662844CF* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20B22960662844CF_CLASS_1_F24CF03AE8E8BE18__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_232E79648899E21B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20B22960662844CF_CLASS_1_F24CF03AE8E8BE18_METHOD_1_232E79648899E21B_OFFSET))(this);
	}

	::System::Void Method_1_9B29AA706B0698A7(::Class_1_4109B64C3CE1B638<::System::UInt64>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4109B64C3CE1B638<::System::UInt64>*))((::PBYTE)hIl2Cpp + CLASS_2_20B22960662844CF_CLASS_1_F24CF03AE8E8BE18_METHOD_1_9B29AA706B0698A7_OFFSET))(this, a1);
	}
};
