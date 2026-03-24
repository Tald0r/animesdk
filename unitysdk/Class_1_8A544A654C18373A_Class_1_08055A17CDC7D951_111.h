#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8A544A654C18373A;
namespace System { class Action; }

#define CLASS_1_8A544A654C18373A_CLASS_1_08055A17CDC7D951_111_METHOD_1_D47D6035609419C9_OFFSET UNITYSDK_OFFSET(0x1722F880)
#define CLASS_1_8A544A654C18373A_CLASS_1_08055A17CDC7D951_111__CTOR_OFFSET UNITYSDK_OFFSET(0x1722F870)

inline static constexpr unsigned int Class_1_8A544A654C18373A_Class_1_08055A17CDC7D951_111_TypeDefinitionIndex = 10871;

class Class_1_8A544A654C18373A_Class_1_08055A17CDC7D951_111 : public ::System::Object
{
public:
	::Class_1_8A544A654C18373A* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A544A654C18373A_CLASS_1_08055A17CDC7D951_111__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D47D6035609419C9(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_8A544A654C18373A_CLASS_1_08055A17CDC7D951_111_METHOD_1_D47D6035609419C9_OFFSET))(this, a1);
	}
};
