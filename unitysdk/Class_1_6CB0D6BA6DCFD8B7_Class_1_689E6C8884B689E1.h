#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_41536F26CBEE8D4C.h"
#include "unitysdk/Enum_3_417F689ECA777088.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_15D62275ABED373C;
class Class_1_3377305115F9BDD9;
class Class_1_B2691B89FDE6F433;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_689E6C8884B689E1__CTOR_OFFSET UNITYSDK_OFFSET(0xAA9A050)

inline static constexpr unsigned int Class_1_6CB0D6BA6DCFD8B7_Class_1_689E6C8884B689E1_TypeDefinitionIndex = 65932;

class Class_1_6CB0D6BA6DCFD8B7_Class_1_689E6C8884B689E1 : public ::System::Object
{
public:
	::Class_1_15D62275ABED373C* Field_1_3; // 0x10
	::System::ValueTuple_2<::Class_1_3377305115F9BDD9*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*> Field_1_7; // 0x18
	::System::String* Field_1_5; // 0x28
	::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_B2691B89FDE6F433*>* Field_1_4; // 0x30
	::System::ValueTuple_2<::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>*> Field_1_6; // 0x38
	::System::Int32 Field_1_1; // 0x48
	::Enum_3_417F689ECA777088 Field_1_0; // 0x4C
	::System::Int32 Field_1_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_689E6C8884B689E1__CTOR_OFFSET))(this);
	}
};
