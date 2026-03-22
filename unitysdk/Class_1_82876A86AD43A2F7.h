#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_01B14DDCD912426D.h"
#include "unitysdk/Struct_2_8662A20E100B0678.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Diagnostics { class Stopwatch; }

#define CLASS_1_82876A86AD43A2F7_METHOD_1_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0xB03C450)
#define CLASS_1_82876A86AD43A2F7_METHOD_1_07D4D6DE5687D0F3_OFFSET UNITYSDK_OFFSET(0xB03C380)
#define CLASS_1_82876A86AD43A2F7_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xB03C5D0)
#define CLASS_1_82876A86AD43A2F7__CTOR_OFFSET UNITYSDK_OFFSET(0xB03C210)

inline static constexpr unsigned int Class_1_82876A86AD43A2F7_TypeDefinitionIndex = 51228;

class Class_1_82876A86AD43A2F7 : public ::System::Object
{
public:
	static ::Class_1_82876A86AD43A2F7** StaticGet_Field_1_0()
	{
		return (::Class_1_82876A86AD43A2F7**)Il2CppClass::FromTypeDefinitionIndex(Class_1_82876A86AD43A2F7_TypeDefinitionIndex)->GetStaticField(0x477F0);
	}
	::System::Collections::Generic::Stack_1<::Struct_2_8662A20E100B0678>* Field_1_5; // 0x10
	::System::Diagnostics::Stopwatch* Field_1_1; // 0x18
	::Il2CppArray<::Struct_2_01B14DDCD912426D>* Field_1_3; // 0x20
	::Il2CppArray<::Struct_2_01B14DDCD912426D>* Field_1_2; // 0x28
	::System::Int32 Field_1_6; // 0x30
	::Struct_2_8662A20E100B0678 Field_1_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82876A86AD43A2F7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_07D4D6DE5687D0F3(::System::UInt16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_82876A86AD43A2F7_METHOD_1_07D4D6DE5687D0F3_OFFSET))(this, a1);
	}

	::System::Void Method_1_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82876A86AD43A2F7_METHOD_1_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82876A86AD43A2F7_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}
};
