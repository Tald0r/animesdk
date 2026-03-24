#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_9A57456E759DE2E2.h"
#include "unitysdk/Struct_2_C32040AFC39CAE18.h"
#include "unitysdk/Struct_2_E89D96144D6E93F8.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_194;
class Class_1_5092FCA5A67513C7;
class Class_2_4BF2ECB2D94E7F27_1;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_988C8E627D1DCB78_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x80D4470)
#define CLASS_1_988C8E627D1DCB78_METHOD_1_29753DB3C8C934FE_OFFSET UNITYSDK_OFFSET(0x80D3CA0)
#define CLASS_1_988C8E627D1DCB78_METHOD_1_2E3D0B01E2EC5EE6_OFFSET UNITYSDK_OFFSET(0x80D5230)
#define CLASS_1_988C8E627D1DCB78_METHOD_1_8CD188C911E02A71_OFFSET UNITYSDK_OFFSET(0x80D3AB0)
#define CLASS_1_988C8E627D1DCB78_METHOD_1_D42434DA1A90844D_OFFSET UNITYSDK_OFFSET(0x80D49B0)
#define CLASS_1_988C8E627D1DCB78_METHOD_1_E72CE2AF66968C6E_OFFSET UNITYSDK_OFFSET(0x80D53A0)
#define CLASS_1_988C8E627D1DCB78_METHOD_1_EB20C5C4CA44C3F5_OFFSET UNITYSDK_OFFSET(0x80D44B0)
#define CLASS_1_988C8E627D1DCB78_METHOD_1_ECDAE25129D07C45_OFFSET UNITYSDK_OFFSET(0x80D4180)
#define CLASS_1_988C8E627D1DCB78__CTOR_OFFSET UNITYSDK_OFFSET(0x80D3AA0)

inline static constexpr unsigned int Class_1_988C8E627D1DCB78_TypeDefinitionIndex = 39093;

class Class_1_988C8E627D1DCB78 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_988C8E627D1DCB78_TypeDefinitionIndex)->GetStaticField(0x361A0);
	}
	::Class_1_5092FCA5A67513C7* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_988C8E627D1DCB78__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8CD188C911E02A71(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_988C8E627D1DCB78_METHOD_1_8CD188C911E02A71_OFFSET))(this, a1);
	}

	::System::Void Method_1_ECDAE25129D07C45(::System::Collections::Generic::List_1<::Struct_2_C32040AFC39CAE18>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_C32040AFC39CAE18>*))((::PBYTE)hIl2Cpp + CLASS_1_988C8E627D1DCB78_METHOD_1_ECDAE25129D07C45_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_988C8E627D1DCB78_METHOD_1_128774387667156B_OFFSET))();
	}

	::System::Void Method_1_EB20C5C4CA44C3F5(::Foundation::AssetPath a1, ::Class_0_16E4307DCC419505_194* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::Class_0_16E4307DCC419505_194*))((::PBYTE)hIl2Cpp + CLASS_1_988C8E627D1DCB78_METHOD_1_EB20C5C4CA44C3F5_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_D42434DA1A90844D(::System::String* a1, ::System::Collections::Generic::List_1<::Struct_2_9A57456E759DE2E2>* a2, ::Class_2_4BF2ECB2D94E7F27_1* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::Struct_2_9A57456E759DE2E2>*, ::Class_2_4BF2ECB2D94E7F27_1*))((::PBYTE)hIl2Cpp + CLASS_1_988C8E627D1DCB78_METHOD_1_D42434DA1A90844D_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_29753DB3C8C934FE(::Struct_2_E89D96144D6E93F8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_E89D96144D6E93F8))((::PBYTE)hIl2Cpp + CLASS_1_988C8E627D1DCB78_METHOD_1_29753DB3C8C934FE_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::Class_1_5092FCA5A67513C7*> Method_1_2E3D0B01E2EC5EE6(::System::String* a1, ::Foundation::AssetPath a2, ::Class_0_16E4307DCC419505_194* a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::Class_1_5092FCA5A67513C7*>(*)(::PVOID, ::System::String*, ::Foundation::AssetPath, ::Class_0_16E4307DCC419505_194*))((::PBYTE)hIl2Cpp + CLASS_1_988C8E627D1DCB78_METHOD_1_2E3D0B01E2EC5EE6_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_5092FCA5A67513C7* Method_1_E72CE2AF66968C6E(::Foundation::AssetPath a1, ::Class_0_16E4307DCC419505_194* a2)
	{
		return ((::Class_1_5092FCA5A67513C7*(*)(::PVOID, ::Foundation::AssetPath, ::Class_0_16E4307DCC419505_194*))((::PBYTE)hIl2Cpp + CLASS_1_988C8E627D1DCB78_METHOD_1_E72CE2AF66968C6E_OFFSET))(this, a1, a2);
	}
};
