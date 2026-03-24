#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDSetInLevelStateGroup_InLevelStateEnum.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDSetInLevelStateGroup_StateGroupEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_CC832716B3CC7E1B;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_261F4FECCB294B14_METHOD_1_63F6BECED14AD07E_OFFSET UNITYSDK_OFFSET(0xAAA9830)
#define CLASS_1_261F4FECCB294B14_METHOD_1_819359AAC984B144_OFFSET UNITYSDK_OFFSET(0xAAA9240)
#define CLASS_1_261F4FECCB294B14_METHOD_1_ADD76EC8489297F6_OFFSET UNITYSDK_OFFSET(0xAAA96F0)
#define CLASS_1_261F4FECCB294B14__CCTOR_OFFSET UNITYSDK_OFFSET(0xAAA8E40)

inline static constexpr unsigned int Class_1_261F4FECCB294B14_TypeDefinitionIndex = 67684;

class Class_1_261F4FECCB294B14 : public ::System::Object
{
public:
	static ::Class_1_CC832716B3CC7E1B** StaticGet_Field_1_2()
	{
		return (::Class_1_CC832716B3CC7E1B**)Il2CppClass::FromTypeDefinitionIndex(Class_1_261F4FECCB294B14_TypeDefinitionIndex)->GetStaticField(0x2EC40);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_261F4FECCB294B14_TypeDefinitionIndex)->GetStaticField(0x2EC48);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_261F4FECCB294B14_TypeDefinitionIndex)->GetStaticField(0x2EC50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_261F4FECCB294B14__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::String*>* Method_1_819359AAC984B144(::System::String* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_261F4FECCB294B14_METHOD_1_819359AAC984B144_OFFSET))(a1);
	}

	static ::System::ValueTuple_2<::System::String*, ::System::String*> Method_1_ADD76EC8489297F6(::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupEnum a1, ::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_InLevelStateEnum a2, ::System::Type* a3)
	{
		return ((::System::ValueTuple_2<::System::String*, ::System::String*>(*)(::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupEnum, ::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_InLevelStateEnum, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_261F4FECCB294B14_METHOD_1_ADD76EC8489297F6_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::System::String*>* Method_1_63F6BECED14AD07E()
	{
		return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_261F4FECCB294B14_METHOD_1_63F6BECED14AD07E_OFFSET))();
	}
};
