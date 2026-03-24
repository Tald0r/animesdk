#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_AI_PATHGRAPHIDUTILS_FORMATFEATUREPOINTID_OFFSET UNITYSDK_OFFSET(0x76C2270)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_FORMATFEATUREPOINTPATHID_OFFSET UNITYSDK_OFFSET(0x76C23D0)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_FORMATGRAPHID_OFFSET UNITYSDK_OFFSET(0x76C2530)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_FORMATGRAPHNODEID_OFFSET UNITYSDK_OFFSET(0x76C2690)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_FORMATSPAWNGROUPID_OFFSET UNITYSDK_OFFSET(0x76C27F0)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_GETGRAPHIDFROMFEATUREPOINTID_OFFSET UNITYSDK_OFFSET(0x76C2190)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_GETGRAPHIDFROMGRAPHNODEID_OFFSET UNITYSDK_OFFSET(0x76C2620)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_GETINDEXFROMFEATUREPOINTID_OFFSET UNITYSDK_OFFSET(0x76C2110)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_GETINDEXFROMFEATUREPOINTPATHID_OFFSET UNITYSDK_OFFSET(0x76C22E0)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_GETINDEXFROMGRAPHID_OFFSET UNITYSDK_OFFSET(0x76C2440)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_GETINDEXFROMGRAPHNODEID_OFFSET UNITYSDK_OFFSET(0x76C25A0)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_GETINDEXFROMSPAWNGROUPID_OFFSET UNITYSDK_OFFSET(0x76C2700)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_GETSECTIONIDFROMFEATUREPOINTID_OFFSET UNITYSDK_OFFSET(0x76C2200)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_GETSECTIONIDFROMFEATUREPOINTPATHID_OFFSET UNITYSDK_OFFSET(0x76C2360)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_GETSECTIONIDFROMGRAPHID_OFFSET UNITYSDK_OFFSET(0x76C24C0)
#define NPCCROWD_AI_PATHGRAPHIDUTILS_GETSECTIONIDFROMSPAWNGROUPID_OFFSET UNITYSDK_OFFSET(0x76C2780)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphIDUtils_TypeDefinitionIndex = 39205;

	class PathGraphIDUtils : public ::System::Object
	{
	public:
		// static const ::System::Int32 INVALID_GRAPH_ID = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 MAX_GRAPH_ID_INDEX = 0x63; // 0x0
		// static const ::System::Int32 INVALID_GRAPH_NODE_ID = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 MAX_GRAPH_NODE_ID = 0x3E7; // 0x0

		static ::System::Int32 GetIndexFromFeaturePointID(::System::Int32 featurePointID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_GETINDEXFROMFEATUREPOINTID_OFFSET))(featurePointID);
		}

		static ::System::Int32 GetGraphIDFromFeaturePointID(::System::Int32 featurePointID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_GETGRAPHIDFROMFEATUREPOINTID_OFFSET))(featurePointID);
		}

		static ::System::Int32 GetSectionIDFromFeaturePointID(::System::Int32 featurePointID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_GETSECTIONIDFROMFEATUREPOINTID_OFFSET))(featurePointID);
		}

		static ::System::Int32 FormatFeaturePointID(::System::Int32 graphID, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_FORMATFEATUREPOINTID_OFFSET))(graphID, index);
		}

		static ::System::Int32 GetIndexFromFeaturePointPathID(::System::Int32 pathID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_GETINDEXFROMFEATUREPOINTPATHID_OFFSET))(pathID);
		}

		static ::System::Int32 GetSectionIDFromFeaturePointPathID(::System::Int32 pathID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_GETSECTIONIDFROMFEATUREPOINTPATHID_OFFSET))(pathID);
		}

		static ::System::Int32 FormatFeaturePointPathID(::System::Int32 sectionID, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_FORMATFEATUREPOINTPATHID_OFFSET))(sectionID, index);
		}

		static ::System::Int32 GetIndexFromGraphID(::System::Int32 graphID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_GETINDEXFROMGRAPHID_OFFSET))(graphID);
		}

		static ::System::Int32 GetSectionIDFromGraphID(::System::Int32 graphID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_GETSECTIONIDFROMGRAPHID_OFFSET))(graphID);
		}

		static ::System::Int32 FormatGraphID(::System::Int32 sectionID, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_FORMATGRAPHID_OFFSET))(sectionID, index);
		}

		static ::System::Int32 GetIndexFromGraphNodeID(::System::Int32 nodeID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_GETINDEXFROMGRAPHNODEID_OFFSET))(nodeID);
		}

		static ::System::Int32 GetGraphIDFromGraphNodeID(::System::Int32 nodeID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_GETGRAPHIDFROMGRAPHNODEID_OFFSET))(nodeID);
		}

		static ::System::Int32 FormatGraphNodeID(::System::Int32 graphID, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_FORMATGRAPHNODEID_OFFSET))(graphID, index);
		}

		static ::System::Int32 GetIndexFromSpawnGroupID(::System::Int32 spawnGroupID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_GETINDEXFROMSPAWNGROUPID_OFFSET))(spawnGroupID);
		}

		static ::System::Int32 GetSectionIDFromSpawnGroupID(::System::Int32 spawnGroupID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_GETSECTIONIDFROMSPAWNGROUPID_OFFSET))(spawnGroupID);
		}

		static ::System::Int32 FormatSpawnGroupID(::System::Int32 sectionID, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHIDUTILS_FORMATSPAWNGROUPID_OFFSET))(sectionID, index);
		}
	};
}
