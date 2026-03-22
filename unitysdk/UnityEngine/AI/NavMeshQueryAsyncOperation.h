#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AsyncOperation.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_AI_NAVMESHQUERYASYNCOPERATION_CANCEL_OFFSET UNITYSDK_OFFSET(0x1AD91FC0)
#define UNITYENGINE_AI_NAVMESHQUERYASYNCOPERATION_GETCORNERSNONALLOC_OFFSET UNITYSDK_OFFSET(0x1AD91F00)
#define UNITYENGINE_AI_NAVMESHQUERYASYNCOPERATION_GETNATIVECORNERS_OFFSET UNITYSDK_OFFSET(0x1AD91FB0)
#define UNITYENGINE_AI_NAVMESHQUERYASYNCOPERATION_GET_CORNERCOUNT_OFFSET UNITYSDK_OFFSET(0x1AD91EF0)
#define UNITYENGINE_AI_NAVMESHQUERYASYNCOPERATION_GET_STATUSNUM_OFFSET UNITYSDK_OFFSET(0x1AD91EE0)
#define UNITYENGINE_AI_NAVMESHQUERYASYNCOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD91FD0)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshQueryAsyncOperation_TypeDefinitionIndex = 23616;

	class NavMeshQueryAsyncOperation : public ::UnityEngine::AsyncOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHQUERYASYNCOPERATION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_StatusNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHQUERYASYNCOPERATION_GET_STATUSNUM_OFFSET))(this);
		}

		::System::Int32 get_CornerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHQUERYASYNCOPERATION_GET_CORNERCOUNT_OFFSET))(this);
		}

		::System::Void GetCornersNonAlloc(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHQUERYASYNCOPERATION_GETCORNERSNONALLOC_OFFSET))(this, list);
		}

		::System::IntPtr GetNativeCorners()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHQUERYASYNCOPERATION_GETNATIVECORNERS_OFFSET))(this);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHQUERYASYNCOPERATION_CANCEL_OFFSET))(this);
		}
	};
}
