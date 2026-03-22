#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyClamping.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGData.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/DuplicateSamplePoint.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArray_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy::Generator { class SamplePointsMaterialGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_COPY_1_OFFSET UNITYSDK_OFFSET(0x19F30330)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_COPY_OFFSET UNITYSDK_OFFSET(0x19F2FDF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19F2FAB0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_DISTANCETOF_OFFSET UNITYSDK_OFFSET(0x19F30340)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_FTODISTANCE_OFFSET UNITYSDK_OFFSET(0x19F30360)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_GETFINDEX_OFFSET UNITYSDK_OFFSET(0x19F30390)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19F2EF50)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_GET_CUSTOMVALUES_OFFSET UNITYSDK_OFFSET(0x19F2E560)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_GET_DUPLICATEPOINTS_OFFSET UNITYSDK_OFFSET(0x19F2E670)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_GET_F_OFFSET UNITYSDK_OFFSET(0x19F2E690)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_GET_MAP_OFFSET UNITYSDK_OFFSET(0x19F2ED90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_GET_NORMALS_OFFSET UNITYSDK_OFFSET(0x19F2E450)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0x19F2EBD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x19F2E340)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x19F2EA10)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_GET_RELATIVEDISTANCES_OFFSET UNITYSDK_OFFSET(0x19F2E120)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_GET_SOURCEF_OFFSET UNITYSDK_OFFSET(0x19F2E850)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_GET_SOURCERELATIVEDISTANCES_OFFSET UNITYSDK_OFFSET(0x19F2E230)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_INTERPOLATEPOSITION_OFFSET UNITYSDK_OFFSET(0x19F30420)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_INTERPOLATEUP_OFFSET UNITYSDK_OFFSET(0x19F30550)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_INTERPOLATE_OFFSET UNITYSDK_OFFSET(0x19F306B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_MOVEBY_OFFSET UNITYSDK_OFFSET(0x19F308D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_MOVE_OFFSET UNITYSDK_OFFSET(0x19F308A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_RECALCULATENORMALS_1_OFFSET UNITYSDK_OFFSET(0x19F31800)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_RECALCULATENORMALS_2_OFFSET UNITYSDK_OFFSET(0x19F323F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_RECALCULATENORMALS_OFFSET UNITYSDK_OFFSET(0x19F31010)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_RECALCULATE_OFFSET UNITYSDK_OFFSET(0x19F30960)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_SET_CUSTOMVALUES_OFFSET UNITYSDK_OFFSET(0x19F2E570)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_SET_DUPLICATEPOINTS_OFFSET UNITYSDK_OFFSET(0x19F2E680)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_SET_F_OFFSET UNITYSDK_OFFSET(0x19F2E7C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_SET_MAP_OFFSET UNITYSDK_OFFSET(0x19F2EEC0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_SET_NORMALS_OFFSET UNITYSDK_OFFSET(0x19F2E460)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_SET_NORMAL_OFFSET UNITYSDK_OFFSET(0x19F2ED00)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_SET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x19F2E350)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x19F2EB40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_SET_RELATIVEDISTANCES_OFFSET UNITYSDK_OFFSET(0x19F2E130)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_SET_SOURCEF_OFFSET UNITYSDK_OFFSET(0x19F2E980)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_SET_SOURCERELATIVEDISTANCES_OFFSET UNITYSDK_OFFSET(0x19F2E240)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19F2F3F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x19F2EF60)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGShape_TypeDefinitionIndex = 35773;

	class CGShape : public ::FluffyUnderware::Curvy::Generator::CGData
	{
	public:
		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> normals; // 0x20
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::DuplicateSamplePoint>* _DuplicatePoints_k__BackingField; // 0x30
		::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single> sourceRelativeDistances; // 0x38
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup*>* MaterialGroups; // 0x48
		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> positions; // 0x50
		::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single> relativeDistances; // 0x60
		::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single> customValues; // 0x70
		::System::Single Length; // 0x80
		::System::Int32 mCacheLastIndex; // 0x84
		::System::Single mCacheLastF; // 0x88
		::System::Boolean Closed; // 0x8C
		::System::Boolean SourceIsManaged; // 0x8D
		::System::Boolean Seamless; // 0x8E
		::System::Single mCacheLastFrag; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FluffyUnderware::Curvy::Generator::CGShape* source)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGShape*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE__CTOR_1_OFFSET))(this, source);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single> get_RelativeDistances()
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_GET_RELATIVEDISTANCES_OFFSET))(this);
		}

		::System::Void set_RelativeDistances(::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single> value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single>))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_SET_RELATIVEDISTANCES_OFFSET))(this, value);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single> get_SourceRelativeDistances()
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_GET_SOURCERELATIVEDISTANCES_OFFSET))(this);
		}

		::System::Void set_SourceRelativeDistances(::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single> value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single>))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_SET_SOURCERELATIVEDISTANCES_OFFSET))(this, value);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> get_Positions()
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_GET_POSITIONS_OFFSET))(this);
		}

		::System::Void set_Positions(::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_SET_POSITIONS_OFFSET))(this, value);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> get_Normals()
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_GET_NORMALS_OFFSET))(this);
		}

		::System::Void set_Normals(::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_SET_NORMALS_OFFSET))(this, value);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single> get_CustomValues()
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_GET_CUSTOMVALUES_OFFSET))(this);
		}

		::System::Void set_CustomValues(::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single> value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single>))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_SET_CUSTOMVALUES_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::DuplicateSamplePoint>* get_DuplicatePoints()
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::DuplicateSamplePoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_GET_DUPLICATEPOINTS_OFFSET))(this);
		}

		::System::Void set_DuplicatePoints(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::DuplicateSamplePoint>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::DuplicateSamplePoint>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_SET_DUPLICATEPOINTS_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Single>* get_F()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_GET_F_OFFSET))(this);
		}

		::System::Void set_F(::Il2CppArray<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_SET_F_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Single>* get_SourceF()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_GET_SOURCEF_OFFSET))(this);
		}

		::System::Void set_SourceF(::Il2CppArray<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_SET_SOURCEF_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_Position()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::Il2CppArray<::UnityEngine::Vector3>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_SET_POSITION_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_Normal()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_GET_NORMAL_OFFSET))(this);
		}

		::System::Void set_Normal(::Il2CppArray<::UnityEngine::Vector3>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_SET_NORMAL_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Single>* get_Map()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_GET_MAP_OFFSET))(this);
		}

		::System::Void set_Map(::Il2CppArray<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_SET_MAP_OFFSET))(this, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean Dispose(::System::Boolean disposing)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_DISPOSE_OFFSET))(this, disposing);
		}

		static ::System::Void Copy(::FluffyUnderware::Curvy::Generator::CGShape* dest, ::FluffyUnderware::Curvy::Generator::CGShape* source)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::Generator::CGShape*, ::FluffyUnderware::Curvy::Generator::CGShape*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_COPY_OFFSET))(dest, source);
		}

		::System::Void Copy_1(::FluffyUnderware::Curvy::Generator::CGShape* source)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGShape*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_COPY_1_OFFSET))(this, source);
		}

		::System::Single DistanceToF(::System::Single distance)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_DISTANCETOF_OFFSET))(this, distance);
		}

		::System::Single FToDistance(::System::Single f)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_FTODISTANCE_OFFSET))(this, f);
		}

		::System::Int32 GetFIndex(::System::Single f, ::System::Single& frag)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_GETFINDEX_OFFSET))(this, f, frag);
		}

		::UnityEngine::Vector3 InterpolatePosition(::System::Single f)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_INTERPOLATEPOSITION_OFFSET))(this, f);
		}

		::UnityEngine::Vector3 InterpolateUp(::System::Single f)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_INTERPOLATEUP_OFFSET))(this, f);
		}

		::System::Void Interpolate(::System::Single f, ::UnityEngine::Vector3& position, ::UnityEngine::Vector3& up)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_INTERPOLATE_OFFSET))(this, f, position, up);
		}

		::System::Void Move(::System::Single& f, ::System::Int32& direction, ::System::Single speed, ::FluffyUnderware::Curvy::CurvyClamping clamping)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Int32&, ::System::Single, ::FluffyUnderware::Curvy::CurvyClamping))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_MOVE_OFFSET))(this, f, direction, speed, clamping);
		}

		::System::Void MoveBy(::System::Single& f, ::System::Int32& direction, ::System::Single speedDist, ::FluffyUnderware::Curvy::CurvyClamping clamping)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Int32&, ::System::Single, ::FluffyUnderware::Curvy::CurvyClamping))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_MOVEBY_OFFSET))(this, f, direction, speedDist, clamping);
		}

		::System::Void Recalculate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_RECALCULATE_OFFSET))(this);
		}

		::System::Void RecalculateNormals(::System::Collections::Generic::List_1<::System::Int32>* softEdges)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_RECALCULATENORMALS_OFFSET))(this, softEdges);
		}

		::System::Void RecalculateNormals_1(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_RECALCULATENORMALS_1_OFFSET))(this, spline);
		}

		::System::Void RecalculateNormals_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE_RECALCULATENORMALS_2_OFFSET))(this);
		}
	};
}
