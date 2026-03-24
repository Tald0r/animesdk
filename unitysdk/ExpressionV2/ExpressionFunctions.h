#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ExpressionV2/ExprValue.h"
#include "unitysdk/Share/EScenePropertyType.h"
#include "unitysdk/System/Object.h"

namespace ExpressionV2 { class ExpressionEvalContext; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_ACTORPROPERTY_OFFSET UNITYSDK_OFFSET(0x72888D0)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_AVATARSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x7289C70)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_CALL_OFFSET UNITYSDK_OFFSET(0x7286200)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_CARDTYPE_OFFSET UNITYSDK_OFFSET(0x7288410)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_CONCAT_OFFSET UNITYSDK_OFFSET(0x72869D0)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETAVATARAUDIOEVENTNAME_OFFSET UNITYSDK_OFFSET(0x728A410)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETAVATARNAME_OFFSET UNITYSDK_OFFSET(0x7289250)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETAVATARTAG_OFFSET UNITYSDK_OFFSET(0x728A0D0)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETBUDDYCOUNT_OFFSET UNITYSDK_OFFSET(0x7289810)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETINDEX_OFFSET UNITYSDK_OFFSET(0x7288B00)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETPOS_OFFSET UNITYSDK_OFFSET(0x7288CC0)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETSTRING_OFFSET UNITYSDK_OFFSET(0x7289170)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_HOLLOWLEVEL_OFFSET UNITYSDK_OFFSET(0x7288730)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_IF_OFFSET UNITYSDK_OFFSET(0x7286BE0)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x7288010)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_ITEM_OFFSET UNITYSDK_OFFSET(0x7286450)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_MAX_OFFSET UNITYSDK_OFFSET(0x7286840)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_MIN_OFFSET UNITYSDK_OFFSET(0x72866B0)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_PLAYERPOS_OFFSET UNITYSDK_OFFSET(0x7288BE0)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_PROPERTYID_OFFSET UNITYSDK_OFFSET(0x72893C0)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_PROPERTY_OFFSET UNITYSDK_OFFSET(0x7286D00)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_RAND_OFFSET UNITYSDK_OFFSET(0x7287F10)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_SCENEPROPERTY_OFFSET UNITYSDK_OFFSET(0x7287B50)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_SCENEVAR_OFFSET UNITYSDK_OFFSET(0x7287180)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_SEPCIALS_OFFSET UNITYSDK_OFFSET(0x7286FC0)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_SQRT_OFFSET UNITYSDK_OFFSET(0x7286360)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_TEAMPROPERTY_OFFSET UNITYSDK_OFFSET(0x7288DA0)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_TRASHREMAINSIZE_OFFSET UNITYSDK_OFFSET(0x7289630)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x7285C10)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x728A580)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS__GETSCENEPROPERTY_OFFSET UNITYSDK_OFFSET(0x72879D0)

namespace ExpressionV2
{
	inline static constexpr unsigned int ExpressionFunctions_TypeDefinitionIndex = 72000;

	class ExpressionFunctions : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Func_4<::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*, ::ExpressionV2::ExprValue>*>** StaticGet_m_functions()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Func_4<::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*, ::ExpressionV2::ExprValue>*>**)Il2CppClass::FromTypeDefinitionIndex(ExpressionFunctions_TypeDefinitionIndex)->GetStaticField(0x470D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS__CTOR_OFFSET))(this);
		}

		static ::ExpressionV2::ExprValue Call(::System::Int32 funcionOpCode, ::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::System::Int32, ::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_CALL_OFFSET))(funcionOpCode, args, argc, context);
		}

		static ::ExpressionV2::ExprValue Sqrt(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_SQRT_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue Item(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_ITEM_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue Min(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_MIN_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue Max(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_MAX_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue Concat(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_CONCAT_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue IF(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_IF_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue Property(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_PROPERTY_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue Sepcials(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_SEPCIALS_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue SceneVar(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_SCENEVAR_OFFSET))(args, argc, context);
		}

		static ::System::Single _GetSceneProperty(::Share::EScenePropertyType type)
		{
			return ((::System::Single(*)(::Share::EScenePropertyType))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS__GETSCENEPROPERTY_OFFSET))(type);
		}

		static ::ExpressionV2::ExprValue SceneProperty(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_SCENEPROPERTY_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue Rand(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_RAND_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue ItemType(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_ITEMTYPE_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue CardType(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_CARDTYPE_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue HollowLevel(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_HOLLOWLEVEL_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue ActorProperty(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_ACTORPROPERTY_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue GetIndex(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETINDEX_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue PlayerPos(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_PLAYERPOS_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue GetPos(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETPOS_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue TeamProperty(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_TEAMPROPERTY_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue GetString(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETSTRING_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue GetAvatarName(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETAVATARNAME_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue PropertyID(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_PROPERTYID_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue TrashRemainSize(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_TRASHREMAINSIZE_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue GetBuddyCount(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETBUDDYCOUNT_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue AvatarSkillLevel(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_AVATARSKILLLEVEL_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue GetAvatarTag(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETAVATARTAG_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue GetAvatarAudioEventName(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETAVATARAUDIOEVENTNAME_OFFSET))(args, argc, context);
		}
	};
}
