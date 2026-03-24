#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_A5AF8EA2F7094EFB;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_99B7CA5FFE02935A_CLASS_1_F3B8E87D5DC46ECB__CTOR_OFFSET UNITYSDK_OFFSET(0x86BC2F0)

inline static constexpr unsigned int Class_2_99B7CA5FFE02935A_Class_1_F3B8E87D5DC46ECB_TypeDefinitionIndex = 68848;

class Class_2_99B7CA5FFE02935A_Class_1_F3B8E87D5DC46ECB : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_4; // 0x10
	::System::Collections::Generic::HashSet_1<::Class_3_A5AF8EA2F7094EFB*>* Field_1_3; // 0x18
	::System::Collections::Generic::HashSet_1<::Class_3_A5AF8EA2F7094EFB*>* Field_1_0; // 0x20
	::System::Collections::Generic::HashSet_1<::Class_3_A5AF8EA2F7094EFB*>* Field_1_1; // 0x28
	::System::Single Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99B7CA5FFE02935A_CLASS_1_F3B8E87D5DC46ECB__CTOR_OFFSET))(this);
	}
};
