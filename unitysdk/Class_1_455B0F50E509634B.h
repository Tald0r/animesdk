#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AnimationCurveLibrary; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_455B0F50E509634B_METHOD_1_0005E3DD34580ABC_OFFSET UNITYSDK_OFFSET(0x619B450)
#define CLASS_1_455B0F50E509634B_METHOD_1_0CC1EA4372265873_OFFSET UNITYSDK_OFFSET(0x61FADA0)
#define CLASS_1_455B0F50E509634B_METHOD_1_2E04E911EC2F4E81_OFFSET UNITYSDK_OFFSET(0x61FA780)
#define CLASS_1_455B0F50E509634B_METHOD_1_4BFE4240535C31C9_OFFSET UNITYSDK_OFFSET(0x61FAC60)
#define CLASS_1_455B0F50E509634B_METHOD_1_6F76B3419ADFA804_OFFSET UNITYSDK_OFFSET(0x61FB0D0)
#define CLASS_1_455B0F50E509634B_METHOD_1_C9D02DA0F72A0E7D_OFFSET UNITYSDK_OFFSET(0x61FAA30)
#define CLASS_1_455B0F50E509634B_METHOD_1_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0x61FAF00)
#define CLASS_1_455B0F50E509634B__CCTOR_OFFSET UNITYSDK_OFFSET(0x61FA730)

inline static constexpr unsigned int Class_1_455B0F50E509634B_TypeDefinitionIndex = 45939;

class Class_1_455B0F50E509634B : public ::System::Object
{
public:
	static ::UnityEngine::AnimationCurve** StaticGet_Field_1_2()
	{
		return (::UnityEngine::AnimationCurve**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455B0F50E509634B_TypeDefinitionIndex)->GetStaticField(0x3C310);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455B0F50E509634B_TypeDefinitionIndex)->GetStaticField(0x3C318);
	}
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::AnimationCurve*, ::System::String*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::AnimationCurve*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455B0F50E509634B_TypeDefinitionIndex)->GetStaticField(0x3C320);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_455B0F50E509634B__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_2E04E911EC2F4E81(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_455B0F50E509634B_METHOD_1_2E04E911EC2F4E81_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C9D02DA0F72A0E7D(::System::String* a1, ::UnityEngine::AnimationCurve* a2)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_455B0F50E509634B_METHOD_1_C9D02DA0F72A0E7D_OFFSET))(a1, a2);
	}

	static ::UnityEngine::AnimationCurve* Method_1_0005E3DD34580ABC(::System::String* a1)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_455B0F50E509634B_METHOD_1_0005E3DD34580ABC_OFFSET))(a1);
	}

	static ::System::Void Method_1_4BFE4240535C31C9(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_455B0F50E509634B_METHOD_1_4BFE4240535C31C9_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_0CC1EA4372265873(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::String*(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_455B0F50E509634B_METHOD_1_0CC1EA4372265873_OFFSET))(a1);
	}

	static ::System::Void Method_1_D737CD2779D51A4E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_455B0F50E509634B_METHOD_1_D737CD2779D51A4E_OFFSET))();
	}

	static ::System::Void Method_1_6F76B3419ADFA804(::System::Collections::Generic::List_1<::MoleMole::Config::AnimationCurveLibrary*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::AnimationCurveLibrary*>*))((::PBYTE)hIl2Cpp + CLASS_1_455B0F50E509634B_METHOD_1_6F76B3419ADFA804_OFFSET))(a1);
	}
};
