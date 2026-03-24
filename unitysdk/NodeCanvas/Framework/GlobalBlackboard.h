#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Blackboard.h"
#include "unitysdk/NodeCanvas/Framework/GlobalBlackboard_SingletonMode.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_CREATE_OFFSET UNITYSDK_OFFSET(0x1A65C5E0)
#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_FIND_OFFSET UNITYSDK_OFFSET(0x1A65C660)
#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_GETALL_OFFSET UNITYSDK_OFFSET(0x1A65C5B0)
#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1A65C580)
#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A65C5A0)
#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_GET_UID_OFFSET UNITYSDK_OFFSET(0x1A65C590)
#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_ISPREFABASSET_OFFSET UNITYSDK_OFFSET(0x1A65C9C0)
#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A65C9D0)
#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A65C700)
#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1A65CA60)
#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A65CDB0)
#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A65CE30)
#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A65CDC0)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int GlobalBlackboard_TypeDefinitionIndex = 27530;

	class GlobalBlackboard : public ::NodeCanvas::Framework::Blackboard
	{
	public:
		static ::System::Collections::Generic::List_1<::NodeCanvas::Framework::GlobalBlackboard*>** StaticGet__allGlobals()
		{
			return (::System::Collections::Generic::List_1<::NodeCanvas::Framework::GlobalBlackboard*>**)Il2CppClass::FromTypeDefinitionIndex(GlobalBlackboard_TypeDefinitionIndex)->GetStaticField(0x1F840);
		}
		::System::String* _UID; // 0x58
		::System::String* _identifier; // 0x60
		::NodeCanvas::Framework::GlobalBlackboard_SingletonMode _singletonMode; // 0x68
		::System::Boolean _dontDestroyOnLoad; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD__CCTOR_OFFSET))();
		}

		::System::String* get_identifier()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::String* get_UID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_GET_UID_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_GET_NAME_OFFSET))(this);
		}

		static ::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::GlobalBlackboard*>* GetAll()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::GlobalBlackboard*>*(*)())((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_GETALL_OFFSET))();
		}

		static ::NodeCanvas::Framework::GlobalBlackboard* Create()
		{
			return ((::NodeCanvas::Framework::GlobalBlackboard*(*)())((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_CREATE_OFFSET))();
		}

		static ::NodeCanvas::Framework::GlobalBlackboard* Find(::System::String* name)
		{
			return ((::NodeCanvas::Framework::GlobalBlackboard*(*)(::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_FIND_OFFSET))(name);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_ONVALIDATE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_TOSTRING_OFFSET))(this);
		}

		::System::Boolean IsPrefabAsset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_ISPREFABASSET_OFFSET))(this);
		}
	};
}
