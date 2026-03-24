#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_531A8EFBE7D517AA.h"
#include "unitysdk/Enum_3_684640426A327E4E.h"
#include "unitysdk/Struct_2_6D1969169CB23895.h"
#include "unitysdk/Struct_2_9505641EB996F055.h"
#include "unitysdk/Struct_2_A12AE614E1EEE2CC.h"
#include "unitysdk/Struct_2_D614AAFC84AD3C97.h"
#include "unitysdk/Struct_2_E4C60CDDB4985731.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONArray; }
namespace SimpleJSON { class JSONClass; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_CC86B677214AB654_METHOD_2_35134AAED4F91FDC_OFFSET UNITYSDK_OFFSET(0x30ED90)
#define STRUCT_2_CC86B677214AB654_METHOD_2_5296262733ABC558_OFFSET UNITYSDK_OFFSET(0x30ED50)
#define STRUCT_2_CC86B677214AB654_METHOD_2_95E5A686613A75F1_1_OFFSET UNITYSDK_OFFSET(0x30ED70)
#define STRUCT_2_CC86B677214AB654_METHOD_2_95E5A686613A75F1_OFFSET UNITYSDK_OFFSET(0x30ED60)
#define STRUCT_2_CC86B677214AB654_METHOD_2_B39A2849987669D2_OFFSET UNITYSDK_OFFSET(0x30ED80)
#define STRUCT_2_CC86B677214AB654_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x30EDA0)
#define STRUCT_2_CC86B677214AB654__CCTOR_OFFSET UNITYSDK_OFFSET(0x683F2F0)

inline static constexpr unsigned int Struct_2_CC86B677214AB654_TypeDefinitionIndex = 38080;

struct alignas(8) Struct_2_CC86B677214AB654
{
	static ::System::Type** StaticGet_Field_2_8()
	{
		return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_CC86B677214AB654_TypeDefinitionIndex)->GetStaticField(0x410A0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>** StaticGet_Field_2_10()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_CC86B677214AB654_TypeDefinitionIndex)->GetStaticField(0x410A8);
	}
	static ::System::Type** StaticGet_Field_2_9()
	{
		return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_CC86B677214AB654_TypeDefinitionIndex)->GetStaticField(0x410B0);
	}
	::System::String* Field_2_0; // 0x10
	::Enum_3_684640426A327E4E Field_2_1; // 0x18
	::Struct_2_9505641EB996F055 Field_2_2; // 0x1C
	::Enum_3_531A8EFBE7D517AA Field_2_3; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_A12AE614E1EEE2CC>* Field_2_4; // 0x28
	::System::Collections::Generic::List_1<::Struct_2_6D1969169CB23895>* Field_2_5; // 0x30
	::System::Collections::Generic::List_1<::Struct_2_D614AAFC84AD3C97>* Field_2_6; // 0x38
	::System::Collections::Generic::List_1<::Struct_2_E4C60CDDB4985731>* Field_2_7; // 0x40

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_CC86B677214AB654__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_5296262733ABC558(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_CC86B677214AB654_METHOD_2_5296262733ABC558_OFFSET))(this, a1);
	}

	::System::Void Method_2_95E5A686613A75F1(::SimpleJSON::JSONNode* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_CC86B677214AB654_METHOD_2_95E5A686613A75F1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_95E5A686613A75F1_1(::SimpleJSON::JSONNode* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_CC86B677214AB654_METHOD_2_95E5A686613A75F1_1_OFFSET))(this, a1, a2, a3);
	}

	::SimpleJSON::JSONNode* Method_2_B39A2849987669D2()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC86B677214AB654_METHOD_2_B39A2849987669D2_OFFSET))(this);
	}

	::System::Boolean Method_2_35134AAED4F91FDC(::SimpleJSON::JSONNode* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_CC86B677214AB654_METHOD_2_35134AAED4F91FDC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC86B677214AB654_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}
};
