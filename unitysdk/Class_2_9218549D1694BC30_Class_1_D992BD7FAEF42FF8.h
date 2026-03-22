#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9218549D1694BC30;
class Class_3_7E6E8DD3EAC12A67_1;
namespace MoleMole { class UIUrbanMapTipsWidgetContext; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9218549D1694BC30_CLASS_1_D992BD7FAEF42FF8_METHOD_1_29F0C501FEEE7583_OFFSET UNITYSDK_OFFSET(0x920F560)
#define CLASS_2_9218549D1694BC30_CLASS_1_D992BD7FAEF42FF8_METHOD_1_53A0A4AE06760C66_OFFSET UNITYSDK_OFFSET(0x920F200)
#define CLASS_2_9218549D1694BC30_CLASS_1_D992BD7FAEF42FF8__CTOR_OFFSET UNITYSDK_OFFSET(0x920F1F0)

inline static constexpr unsigned int Class_2_9218549D1694BC30_Class_1_D992BD7FAEF42FF8_TypeDefinitionIndex = 40421;

class Class_2_9218549D1694BC30_Class_1_D992BD7FAEF42FF8 : public ::System::Object
{
public:
	::MoleMole::UIUrbanMapTipsWidgetContext* Field_1_2; // 0x10
	::System::Action_1<::Class_3_7E6E8DD3EAC12A67_1*>* Field_1_3; // 0x18
	::Class_2_9218549D1694BC30* Field_1_0; // 0x20
	::System::UInt32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9218549D1694BC30_CLASS_1_D992BD7FAEF42FF8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_53A0A4AE06760C66(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_9218549D1694BC30_CLASS_1_D992BD7FAEF42FF8_METHOD_1_53A0A4AE06760C66_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_29F0C501FEEE7583(::Class_3_7E6E8DD3EAC12A67_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7E6E8DD3EAC12A67_1*))((::PBYTE)hIl2Cpp + CLASS_2_9218549D1694BC30_CLASS_1_D992BD7FAEF42FF8_METHOD_1_29F0C501FEEE7583_OFFSET))(this, a1);
	}
};
