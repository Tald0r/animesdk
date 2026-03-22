#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_582;
class Class_2_D89CCC627A66D0AD;
namespace MoleMole { class UIActivePropsWindowContext; }
namespace MoleMole { class UIRoleSelectPageContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_226AE26B3BC4FA82_CLASS_1_54915FE8352116D5_1_METHOD_1_35BF7C3B1038EEE4_OFFSET UNITYSDK_OFFSET(0x9203320)
#define CLASS_1_226AE26B3BC4FA82_CLASS_1_54915FE8352116D5_1_METHOD_1_80D17D5096B17A35_OFFSET UNITYSDK_OFFSET(0x9203360)
#define CLASS_1_226AE26B3BC4FA82_CLASS_1_54915FE8352116D5_1_METHOD_1_9F1F052798A1EF73_OFFSET UNITYSDK_OFFSET(0x9203310)
#define CLASS_1_226AE26B3BC4FA82_CLASS_1_54915FE8352116D5_1_METHOD_1_D5403E9C088FBB3A_OFFSET UNITYSDK_OFFSET(0x9203380)
#define CLASS_1_226AE26B3BC4FA82_CLASS_1_54915FE8352116D5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9203300)

inline static constexpr unsigned int Class_1_226AE26B3BC4FA82_Class_1_54915FE8352116D5_1_TypeDefinitionIndex = 40287;

class Class_1_226AE26B3BC4FA82_Class_1_54915FE8352116D5_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10
	::Class_2_208CC9941471731A_582* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_226AE26B3BC4FA82_CLASS_1_54915FE8352116D5_1__CTOR_OFFSET))(this);
	}

	::MoleMole::UIActivePropsWindowContext* Method_1_9F1F052798A1EF73(::MoleMole::UIActivePropsWindowContext* a1)
	{
		return ((::MoleMole::UIActivePropsWindowContext*(*)(::PVOID, ::MoleMole::UIActivePropsWindowContext*))((::PBYTE)hIl2Cpp + CLASS_1_226AE26B3BC4FA82_CLASS_1_54915FE8352116D5_1_METHOD_1_9F1F052798A1EF73_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_35BF7C3B1038EEE4(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_226AE26B3BC4FA82_CLASS_1_54915FE8352116D5_1_METHOD_1_35BF7C3B1038EEE4_OFFSET))(this, a1);
	}

	::System::String* Method_1_80D17D5096B17A35(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_226AE26B3BC4FA82_CLASS_1_54915FE8352116D5_1_METHOD_1_80D17D5096B17A35_OFFSET))(this, a1);
	}

	::MoleMole::UIRoleSelectPageContext* Method_1_D5403E9C088FBB3A(::System::Int32 a1, ::Il2CppArray<::Class_2_D89CCC627A66D0AD*>* a2)
	{
		return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::Class_2_D89CCC627A66D0AD*>*))((::PBYTE)hIl2Cpp + CLASS_1_226AE26B3BC4FA82_CLASS_1_54915FE8352116D5_1_METHOD_1_D5403E9C088FBB3A_OFFSET))(this, a1, a2);
	}
};
