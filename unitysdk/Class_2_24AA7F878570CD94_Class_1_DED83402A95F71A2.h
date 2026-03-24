#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B26407BD81502D9;
class Class_1_BE6BF7909AD9D940;
class Class_2_24AA7F878570CD94;
class Class_3_FA909280D0088C3A;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_24AA7F878570CD94_CLASS_1_DED83402A95F71A2_METHOD_1_1007A90F82F9F038_OFFSET UNITYSDK_OFFSET(0x70CE760)
#define CLASS_2_24AA7F878570CD94_CLASS_1_DED83402A95F71A2__CTOR_OFFSET UNITYSDK_OFFSET(0x70CE750)

inline static constexpr unsigned int Class_2_24AA7F878570CD94_Class_1_DED83402A95F71A2_TypeDefinitionIndex = 45371;

class Class_2_24AA7F878570CD94_Class_1_DED83402A95F71A2 : public ::System::Object
{
public:
	::Class_2_24AA7F878570CD94* Field_1_3; // 0x10
	::System::Action* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::Class_1_1B26407BD81502D9*>* Field_1_2; // 0x20
	::Class_3_FA909280D0088C3A* Field_1_0; // 0x28
	::System::UInt32 Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24AA7F878570CD94_CLASS_1_DED83402A95F71A2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1007A90F82F9F038(::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*))((::PBYTE)hIl2Cpp + CLASS_2_24AA7F878570CD94_CLASS_1_DED83402A95F71A2_METHOD_1_1007A90F82F9F038_OFFSET))(this, a1);
	}
};
