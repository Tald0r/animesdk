#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONClass; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define CLASS_1_85B16A7CAE0D0F9F_METHOD_1_29D8D81F6A1E8EF6_OFFSET UNITYSDK_OFFSET(0x84B4580)
#define CLASS_1_85B16A7CAE0D0F9F_METHOD_1_2BC74F9E15A81E49_OFFSET UNITYSDK_OFFSET(0x84B4410)
#define CLASS_1_85B16A7CAE0D0F9F_METHOD_1_77A05942BE8D62E0_OFFSET UNITYSDK_OFFSET(0x84B49A0)
#define CLASS_1_85B16A7CAE0D0F9F_METHOD_1_E999E4CA7B3623C8_OFFSET UNITYSDK_OFFSET(0x84B44F0)

inline static constexpr unsigned int Class_1_85B16A7CAE0D0F9F_TypeDefinitionIndex = 51051;

class Class_1_85B16A7CAE0D0F9F : public ::System::Object
{
public:
	static ::System::String* Method_1_2BC74F9E15A81E49(::SimpleJSON::JSONClass* a1)
	{
		return ((::System::String*(*)(::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + CLASS_1_85B16A7CAE0D0F9F_METHOD_1_2BC74F9E15A81E49_OFFSET))(a1);
	}

	static ::System::Void Method_1_E999E4CA7B3623C8(::SimpleJSON::JSONNode* a1, ::System::String* a2, ::SimpleJSON::JSONNode* a3)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::String*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_85B16A7CAE0D0F9F_METHOD_1_E999E4CA7B3623C8_OFFSET))(a1, a2, a3);
	}

	static ::SimpleJSON::JSONNode* Method_1_29D8D81F6A1E8EF6(::System::Object* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_85B16A7CAE0D0F9F_METHOD_1_29D8D81F6A1E8EF6_OFFSET))(a1);
	}

	static ::System::Void Method_1_77A05942BE8D62E0(::SimpleJSON::JSONNode* a1, ::System::String* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_85B16A7CAE0D0F9F_METHOD_1_77A05942BE8D62E0_OFFSET))(a1, a2, a3);
	}
};
